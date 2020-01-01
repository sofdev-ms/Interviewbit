//https://www.interviewbit.com/problems/nearest-smaller-element/

vector<int> Solution::prevSmaller(vector<int> &A) {

    stack < int > s;
    int n = A.size();
    vector < int > ans( n , -1 );

    s.push( n - 1);
    int i = n - 2;
    while( i >= 0)
    {
        while(!s.empty() && A[s.top()] > A[i])
        {
            ans[s.top()] = i;
            s.pop();
        }
        s.push(i);
        i--;
    }
    return ans;


}
