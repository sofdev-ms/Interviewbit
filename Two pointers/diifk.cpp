//https://www.interviewbit.com/problems/diffk/

int Solution::diffPossible(vector<int> &A, int B) {
    int i = 0;
    int j = 1;
    int n = A.size();
    while( i < n && j < n)
    {
        if(i!= j && A[j] - A[i] == B)
        return 1;
        else if(A[j] - A[i] > B)
        i++;
        else
        j++;

    }
    return 0;
}
