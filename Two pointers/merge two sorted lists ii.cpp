// https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    int m = B.size();

    vector < int > c;

    int i = 0;
    int j = 0;
    while( i < n && j < m)
    {
        if(A[i] <= B[j])
        {
            c.push_back(A[i]);
            i++;
        }
        else
        {
            c.push_back(B[j]);
            j++;
        }
    }
    while( i < n)
    c.push_back(A[i++]);

    while( j < m)
    c.push_back(B[j++]);

    A = c;

}
