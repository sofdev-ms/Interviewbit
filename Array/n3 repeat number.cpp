// https://www.interviewbit.com/problems/n3-repeat-number/

int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int c1 = 0 ,c2 = 0;
    int var1 = INT_MAX;
    int var2 = INT_MAX;
    int n = A.size();

    for(int i =0 ; i  <n ; i ++)
    {
        if(var1 == A[i])
            c1++;
        else if(var2 == A[i])
            c2 ++;
        else if(c1 == 0)
        {
            c1++;
            var1 = A[i];
        }
        else if(c2 == 0)
        {
            c2 ++;
            var2 = A[i];
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1 = 0;
    c2 = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(var1 == A[i])
        c1++;
        else if(var2 == A[i])
        c2++;
    }
   // cout << n << " " <<c1 << " " << c2 << endl;
    if(c1 > n/3)
    return var1;
    if(c2 > n/3)
    return var2;

    return -1;



}
