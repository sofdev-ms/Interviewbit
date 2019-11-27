// https://www.interviewbit.com/problems/anti-diagonals/

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {

    vector < vector < int >> ans;
    int n = A.size();
    int m = A[0].size();

    for(int i = 0 ; i < m ; i++)
    {
        vector < int > a;
        int k = i;
        int j = 0;
        while( k>=0 && j<n)
        {
            a.push_back(A[j][k]);
            k--;
            j++;
        }
        ans.push_back(a);
    }

    for(int i = 1; i < n ; i ++)
    {
        vector < int > a;
        int j = m - 1;
        int k = i;
        while( k < n && j >= 0)
        {
            a.push_back(A[k][j]);
            j--;
            k++;
        }
        ans.push_back(a);
    }
    return ans;

}
