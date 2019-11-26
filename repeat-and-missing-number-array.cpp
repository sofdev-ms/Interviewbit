//https://www.interviewbit.com/problems/repeat-and-missing-number-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();

    int a = 0;
    int b = 0;
    for(int i = 1; i <= n ; i ++)
    {
        a ^= i;
        b ^= A[i - 1];
    }
    int xor1 = a ^ b;
    int setbit = xor1 & ~(xor1 - 1);

    int x = 0;
    int y = 0;
    for(int i = 0; i < n ; i++)
    {
        if(A[i] & setbit)
        x ^= A[i];
        else
        y ^= A[i];

        if((i + 1) & setbit)
        x ^= (i + 1);
        else
        y ^= (i + 1);
    }

    vector < int > ans;
    for(int i = 0 ; i <  n ; i ++)
    {
        if(A[i] == y)
        {
            swap(x , y);
            break;
        }
    }
    ans.push_back(x);
    ans.push_back(y);

    return ans;


}
