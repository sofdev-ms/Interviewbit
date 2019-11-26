https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int total = 0;
    for(int i = 1; i < n ; i ++)
    {
        int d1 = A[i] - A[i - 1];
        int d2 = B[i] - B[i - 1];

        total += max(abs(d1) , abs(d2));
    }
    return total;
}
