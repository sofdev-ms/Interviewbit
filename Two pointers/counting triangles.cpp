//https://www.interviewbit.com/problems/counting-triangles/

#define mod 1000000007

int Solution::nTriang(vector<int> &A) {
    int n = A.size();
    sort(A.begin() , A.end());
    long long int ans = 0;
    for(int i = n - 1; i >=0 ;i --)
    {
        int j = 0;
        int k = i - 1;
        while( j < k )
        {
            if(A[j] + A[k] <= A[i])
            {
                j++;
            }
            else
            {
                ans += k - j;
                k--;
            }
        }

    }
    return ans%mod;
}
