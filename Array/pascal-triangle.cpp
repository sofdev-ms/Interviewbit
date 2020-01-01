//https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::solve(int A) {

    vector < vector < int > > ans;
    if(A == 0)
    return ans;
    vector < int > a;
    a.push_back(1);
    ans.push_back(a);
    int size = 1;
    for(int i = 1; i <A ; i ++)
    {
        vector < int > a1;
        a1.push_back(ans[i -1][0]);

        for(int j = 1; j < size; j ++)
        {
            a1.push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
        }

        a1.push_back(ans[i -1][size - 1]);
        size ++;
        ans.push_back(a1);

    }

    return ans;

}
