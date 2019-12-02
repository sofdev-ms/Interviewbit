// https://www.interviewbit.com/problems/largest-rectangle-in-histogram/

int Solution::largestRectangleArea(vector<int> &A) {
    int n  =A.size();
    if( n == 0)
    return 0;
    int left[n];
    left[0] = 1;
    for(int i = 1; i < n ; i ++)
    {
        int total = 1;
        int j = i - 1;
        while(j >=0 && A[j] >= A[i])
        {
            total += left[j];
            j -= left[j];
        }
        left[i] = total;
    }

    int right[n];
    right[n - 1] = 1;
    int ans = A[ n - 1] * (left[n - 1] + right[ n - 1] - 1);
    for(int i = n - 2 ; i >=0 ; i--)
    {
        int total = 1;
        int j = i + 1;
        while(j < n && A[j] >= A[i])
        {
            total += right[j];
            j += right[j];
        }
        right[i] = total;
       // cout << left[i] << " " << right[i] << endl;
        ans = max(ans , A[i] * (left[i] + right[i] - 1));
    }

    return ans;
}
