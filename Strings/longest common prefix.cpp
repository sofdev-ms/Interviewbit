// https://www.interviewbit.com/problems/longest-common-prefix/

string Solution::longestCommonPrefix(vector<string> &A) {
    int n = A.size();
    string ans = "";
    int mn = A[0].length();
    for(int i = 1; i < n ; i ++)
    {
        int l = A[i].length();
        mn = min(mn , l);
    }
    for(int i =0 ; i < mn; i ++)
    {
        char c = A[0][i];
        for(int j = 1; j < n ; j ++)
        {
            if(A[j][i] != c )
            return ans;
        }
        ans += c;
    }
    return  ans;
}
