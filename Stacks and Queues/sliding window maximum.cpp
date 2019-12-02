// https://www.interviewbit.com/problems/sliding-window-maximum/

vector<int> Solution::slidingMaximum(const vector<int> &A, int k) {
    int n = A.size();
    deque < int > q(k);
    for(int i = 0 ; i < k ; i ++)
    {
        while(!q.empty() && A[i] >= A[q.back()])
        q.pop_back();

        q.push_back(i);
    }
    vector < int > ans;
    for(int i = k ; i < n ; i++)
    {
        ans.push_back(A[q.front()]);
        while(!q.empty() && q.front()<= i-k)
        q.pop_front();

        while(!q.empty() && A[i] >= A[q.back()])
        q.pop_back();

        q.push_back(i);
    }
    ans.push_back(A[q.front()]);

    return ans;
}
