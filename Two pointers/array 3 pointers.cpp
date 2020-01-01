//https://www.interviewbit.com/problems/array-3-pointers/

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {

    int i = 0;
    int j = 0;
    int k = 0;
    int n = A.size();
    int m = B.size();
    int l = C.size();

    int ans = INT_MAX;
    while( i < n && j < m && k < l)
    {
        int diff1 = abs(A[i] - B[j]);
        int diff2 = abs(A[i] - C[k]);
        int diff3 = abs(B[j] - C[k]);

        int temp = max(diff1 , max(diff2 , diff3));

        if(temp < ans)
        ans = temp;
        if(ans == 0)
        return ans;
        if(diff1 == temp)
        {
            if(A[i] < B[j])
            i++;
            else
            j++;
        }
        else if(diff2 == temp)
        {
            if(A[i] < C[k])
            i++;
            else
            k++;
        }
        else if(diff3 == temp)
        {
            if(B[j] < C[k])
            j++;
            else
            k++;
        }
    }
    return ans;
}
