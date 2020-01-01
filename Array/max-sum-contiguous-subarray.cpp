//https://www.interviewbit.com/problems/max-sum-contiguous-subarray/


int Solution::maxSubArray(const vector<int> &A) {
    int ans = 0 ;
    int max1 = 0;

    int n = A.size();
    for(int  i =0 ; i < n ; i ++)
    {
        max1 = max(A[i] , max1 + A[i]);
        ans = max(ans , max1);
    }
    return ans;
}
