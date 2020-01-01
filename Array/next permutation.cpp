// https://www.interviewbit.com/problems/next-permutation/

vector<int> Solution::nextPermutation(vector<int> &A) {

    int n = A.size();
    int i = n - 1;
    stack < int > s;
    s.push(n - 1);
    i = n- 2;
    int ans = -1;
    while( i>= 0 )
    {
        if(A[s.top()] > A[i])
        {
            while(!s.empty() && A[s.top()]  > A[i])
            {
                ans = s.top();
                s.pop();
            }
            break;
        }
        else
        s.push(i);

        i--;
    }
    // cout << ans << endl;
    if(ans != -1)
    swap(A[i] , A[ans]);
    i++;
    sort(A.begin() + i , A.end());

    return A;


}
