// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int j = 0 ;
    for(int i = 0 ; i< n - 1; i ++)
    {
        if(A[i]!=A[i + 1])
        A[j++] = A[i];
    }
    A[j++] = A[n-1];

    return j;

}
