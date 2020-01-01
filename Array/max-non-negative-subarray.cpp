// https://www.interviewbit.com/problems/max-non-negative-subarray/

vector<int> Solution::maxset(vector<int> &A) {
    int start = -1;
    int end = -1;

    int n = A.size();

    int size = 0 ;

    int i = 0;
    long long int sum = 0;
    long long int mx = 0;
    while(i < n)
    {
        int j = i;
        sum = 0;
        while( j < n && A[j] >=0)
        {
            sum += A[j];
            j++;
        }
        if( sum > mx)
        {
             mx = sum;
             start = i;
             end = j;
             size = j - i;
        }
        else if(sum == mx && j - i > size)
        {
            size = j - i;
            start = i;
            end = j;
        }
        i = j + 1;
    }
    vector < int > ans;
    for(int j = start ; j < end; j ++)
    ans.push_back(A[j]);
    return ans;
}
