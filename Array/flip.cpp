https://www.interviewbit.com/problems/flip/

vector<int> Solution::flip(string A) {
    int max1 = INT_MIN;
    int max2 = 0;
    int ind = -1;
    int total = 0;
    int n = A.length();
    for(int i = 0 ; i < n ; i ++)
    {
        if(A[i] == '1')
        total ++;

        int c = (A[i] == '1') ? -1 : 1;

        max2 = max(c , max2 + c);
        if(max1 < max2)
        {
            max1 = max2;
            ind = i;
        }
    }
    int j = ind;
    int curr = 0;
    int start = -1;
    while( j >= 0)
    {
        if(A[j] == '0')
        curr ++;
        else
        curr --;


        if(curr == max1)
        start = j;

        j--;
    }
    vector < int > ans;
    if(max1 < 1)
    return ans;
    ans.push_back(start + 1);
    ans.push_back(ind + 1);
    return ans;

}
