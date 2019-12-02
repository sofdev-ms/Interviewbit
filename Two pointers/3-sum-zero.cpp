// https://www.interviewbit.com/problems/3-sum-zero/

vector<vector<int> > Solution::threeSum(vector<int> &A) {
    int n = A.size();
    set < int > s;
    sort(A.begin() , A.end());
    vector < vector < int > > ans;
    map < pair < int ,int >, bool > m;
    for(int i = 0; i  < n ;i  ++)
    {
        int target = -1 * A[i];
        int j = i + 1;
        int k = n - 1;
        while(j < k)
        {
            if(A[j] + A[k] == target)
            {
                if(!m[{A[i] , A[j]}])
                {
                    vector < int > a;
                    a.push_back(A[i]);
                    a.push_back(A[j]);
                    a.push_back(A[k]);
                    ans.push_back(a);
                    m[{A[i] , A[j]}] = true;
                }
                j++;
                k--;
            }
            else if(A[j] + A[k] > target)
            k--;
            else
            j++;
        }
    }
    return ans;
}
