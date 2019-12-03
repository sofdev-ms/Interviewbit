//https://www.interviewbit.com/problems/count-of-rectangles-with-area-less-than-the-given-number/?ref=similar_problems

#define mod 1000000007

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    long long int ans = 0;
    for(int i = 0; i < n ; i ++)
    {
        long long int x = A[i];
        if(x * x < B)
        ans ++;
        else
        break;
    }
    int i = 0;
    int j = n - 1;
    while( i < j )
    {
        long long int x = A[i];
        long long int y = A[j];
        if(x * y < B)
        {
            ans += (long long int) 2*( j - i);
            i++;
        }
        else if(x * y >= B)
        {
            j--;
        }
    }
    return ans % mod;
}
