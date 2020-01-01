// https://www.interviewbit.com/problems/find-permutation/

vector<int> Solution::findPerm(const string A, int B) {

    vector < int > ans;
    int i = 1;
    int j = B;

    for(int i1 = 0 ; i1 < B - 1; i1 ++)
    {
        if(A[i1] == 'D')
        {
            ans.push_back(j);
            j--;
        }
        else
        ans.push_back(i++);
    }
    ans.push_back(i);
    return ans;
}
