//https://www.interviewbit.com/problems/amazing-subarrays/

#define mod 10003
int Solution::solve(string A) {
    int n = A.length();
    long long int ans = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        char c = tolower(A[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c =='o' || c =='u')
        {
            ans +=(long long int) n - i;
        }
    }
    return ans % mod;
}
