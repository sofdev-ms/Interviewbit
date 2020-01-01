// https://www.interviewbit.com/problems/first-missing-integer/

int Solution::firstMissingPositive(vector<int> &A) {

    int n = A.size();
    int mx = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        mx = max(mx , A[i]);
        if(A[i] < 0)
        A[i] = 0;
    }
    if( mx == 0)
    return 1;

    for(int i = 0 ; i <  n; i ++)
    {
        int c = A[i] % (mx + 1);
        if( c!=0 && c - 1 < n)
        {
            A[c - 1]+= mx + 1;
        }
    }
    for(int i = 0 ; i <  n;i++)
    {
        if(A[i] < mx + 1)
        return i + 1;
    }
    return n + 1;
}
