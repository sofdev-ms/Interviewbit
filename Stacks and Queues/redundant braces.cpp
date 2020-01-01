//https://www.interviewbit.com/problems/redundant-braces/

int Solution::braces(string A) {

    stack < char > s;
    int n = A.length();

    for(int i = 0 ; i  < n ; i ++)
    {
        if(A[i] != ')')
        s.push(A[i]);
        else
        {
            if(s.top() == '(')
            return 1;
            while(!s.empty() && s.top()!='(')
            s.pop();

            if(!s.empty())
            s.pop();
        }
    }
    return 0;
}
