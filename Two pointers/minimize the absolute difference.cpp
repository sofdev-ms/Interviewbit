// https://www.interviewbit.com/problems/minimize-the-absolute-difference/

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;
    int n = A.size();
    int m = B.size();
    int p = C.size();
    int ans = INT_MAX;
    while( i < n && j < m && k < p)
    {
        int mn = min(A[i] , min( B[j] , C[k]));
        int mx = max(A[i] , max(B[j] ,C[k]));

        ans = min(ans , abs(mx - mn));
        if(A[i] == mn)
        i++;
        else if(B[j] == mn)
        j++;
        else if(C[k] == mn)
        k++;
    }
    return ans;

}
