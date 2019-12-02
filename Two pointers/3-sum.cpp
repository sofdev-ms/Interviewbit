// https://www.interviewbit.com/problems/3-sum/

int Solution::threeSumClosest(vector<int> &A, int target) {
    int n = A.size();
    sort(A.begin() , A.end());
    int ans = A[0] + A[1] + A[2];
    int diff = abs(target - ans);
    for(int i = 0 ; i < n ; i ++)
    {
        int j = i + 1;
        int k = n - 1;
        int t = target - A[i];

        while( j < k )
        {
            if(diff > abs(t - A[j] - A[k]))
            {
                ans = A[i] + A[j] + A[k];
                diff = abs(t - A[j] - A[k]);
            }
            if(A[j] + A[k] == t)
            {
                return target;
            }
            else if(A[j] + A[k] > t)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return ans;
}
