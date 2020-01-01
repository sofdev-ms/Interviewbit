// https://www.interviewbit.com/problems/maximum-unsorted-subarray/

vector<int> Solution::subUnsort(vector<int> &A) {

    int n = A.size();
    int i = 0;
    for(i = 0; i  <n - 1; i++)
    {
        if(A[i] > A[i + 1])
        {
            break;
        }
    }

    vector < int > ans;
    if( i == n - 1)
    {
        ans.push_back( -1);
        return ans;
    }

    int j = n - 1;
    for(j = n - 1; j> 0 ; j--)
    {
        if(A[j] < A[j - 1])
        break;
    }
    int mn = A[i];
    int mx = A[i];
    for(int k = i ; k <= j ; k++)
    {
        mn = min(A[k] , mn);
        mx = max(A[k] , mx);
    }

    for(int k = 0;  k < i ; k ++)
    {
        if(A[k] > mn)
        {
            i = k;
            break;
        }
    }

    for(int k = j + 1; k < n ; k ++)
    {
        if(A[k] < mx)
        {
            j = k;
            break;
        }
    }
    ans.push_back(i);
    ans.push_back(j);
    return ans;
}
