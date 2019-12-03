// https://www.interviewbit.com/problems/sort-by-color/

void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int i = 0;
    int j = n - 1;
    while( i < n && A[i] == 0)
    i++;
    while( j >=0 && A[j] == 2)
    j--;
    int k = i;
    while( k<= j)
    {
        if(A[k] == 2)
        {
            swap(A[k] , A[j]);
            j--;
        }
        else if(A[k] == 0)
        {
            swap(A[k] , A[i]);
            if( k == i)
            k++;
            i++;


        }
        else
        k++;
    }



}
