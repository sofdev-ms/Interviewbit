// https://www.interviewbit.com/problems/count-of-pairs-with-the-given-sum/?ref=similar_problems

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int i = 0;
    int j = n - 1;
    int count = 0;
    while( i < j )
    {
        if(A[i] + A[j] == B)
        {
            count ++;
            i++;
            j--;
        }
        else if(A[i] + A[j] > B)
        j--;
        else
        i++;
    }
    return count;
}
