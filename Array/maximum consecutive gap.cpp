// https://www.interviewbit.com/problems/maximum-consecutive-gap/

int Solution::maximumGap(const vector<int> &A) {

    int n = A.size();
    if( n < 2)
    return 0;
    int ans = 0;

    vector < int > bmin( n, -1);
    vector < int > bmax( n, -1);

    int mn = A[0];
    int mx = A[0];

    for(int i =0 ;i  < n ; i ++)
    {
        mn = min(A[i] , mn);
        mx = max(A[i] , mx);
    }

    double gap = (double)(mx - mn)/(double)(n - 1);
    if(gap == 0)
    return 0;

    for(int i = 0 ; i < n ; i ++)
    {
        int bn = (int)((A[i] - mn)/ gap);
        if(bmin[bn] == -1)
        {
            bmin[bn] = A[i];
            bmax[bn] = A[i];
        }
        else
        {
            bmin[bn] = min(A[i] , bmin[bn]);
            bmax[bn] = max(A[i] , bmax[bn]);
        }
    }
    int prev = mn;
    for(int i = 0 ; i < n - 1; i ++)
    {
        if(bmin[i] != -1)
        {
            ans = max(ans , bmin[i] - prev);
            prev = bmax[i];
        }
    }
    ans = max(ans , mx - prev);

    return ans;

}
