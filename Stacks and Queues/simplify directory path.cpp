// https://www.interviewbit.com/problems/simplify-directory-path/

string Solution::simplifyPath(string A) {
    int n = A.length();
    if( n == 0)
    return A;
    int i = 0;
    stack < string > s;
    while( i < n)
    {
        if(A[i] != '/')
        {
            string x = "";
            while(i <n && A[i]!='/')
            {
                x += A[i];
                i++;
            }
            if(x == "..")
            {
                if(!s.empty())
                s.pop();
            }
            else if(x!=".")
            {
                s.push(x);
            }
        }
        else
        i++;
    }
    string ans = "";
    if(s.empty())
    return "/";
    while(!s.empty())
    {
        ans = "/" + s.top() + ans;
        s.pop();
    }
    return ans;


}
