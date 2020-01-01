// https://www.interviewbit.com/problems/noble-integer/

int Solution::solve(vector<int> &A) {
    sort(A.begin() ,A.end());
    int n = A.size();
    for(int i = 0 ; i <  n;  i ++)
    {
        int x = A[i];
        while( i < n && A[i] == x)
        i++;
        i--;
        if( n - i - 1 == A[i])
        return 1;
    }
    return -1;
}
