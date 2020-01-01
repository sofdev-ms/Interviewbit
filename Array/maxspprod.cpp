//https://www.interviewbit.com/problems/maxspprod/

#define mod 1000000007

int Solution::maxSpecialProduct(vector<int> &A) {

    long long int pro = 0;
    int n = A.size();

    stack < long long int > s;
    long long int left[n];
    memset(left , 0 ,sizeof(left));

    s.push(0);
    long long int i = 1;
    while( i <  n)
    {
        while(!s.empty() && A[i] > A[s.top()])
        {
            pro = max(pro , i * left[s.top()]);
            s.pop();
        }
        if(!s.empty())
        {
            if(A[i]!= A[s.top()])
            left[i] = s.top();
            else
            left[i] = left[s.top()];
        }
        s.push(i);
        i++;

    }
    return pro % mod;


}
