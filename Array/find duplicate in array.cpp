// https://www.interviewbit.com/problems/find-duplicate-in-array/

int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int size=A.size();
    vector<bool > v(size,false);
    for(int i=0;i<size;i++)
    {

        if(v[A[i]])
        return A[i];

        v[A[i]]=true;
            }


        return -1;

}
