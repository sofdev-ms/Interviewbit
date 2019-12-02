//https://www.interviewbit.com/problems/intersection-of-sorted-arrays/

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int n = A.size();
    int m = B.size();
    int i = 0;
    int j = 0;
    vector < int > ans;
    while( i < n && j < m)
    {
        if(A[i] == B[j])
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i] < B[j])
        i++;
        else
        j++;
    }
    return ans;
}
