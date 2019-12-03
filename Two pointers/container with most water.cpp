//https://www.interviewbit.com/problems/container-with-most-water/

int Solution::maxArea(vector<int> &A) {
    int n = A.size();
    if(n == 0 || n == 1)
    return 0;
    int i = 0 ;
    int j = n - 1;
    int ans = 0;
    while( i < j)
    {
        if(A[i] < A[j])
        {
            ans = max(ans , A[i] * ( j - i));
            i++;
        }
        else
        {
            ans = max(ans , A[j] * ( j - i));
            j--;
        }
    }
    return ans;

}
