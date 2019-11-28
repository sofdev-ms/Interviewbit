https://www.interviewbit.com/problems/set-matrix-zeros/

void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int m = A[0].size();
    int row[n];
    int col[m];
    memset(row , 0 ,sizeof(row));
    memset(col , 0 , sizeof(col));

    for(int i = 0; i  < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            if(A[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1 ;
            }
        }
    }

    for(int i = 0; i  < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            if(row[i] || col[j])
            {
                A[i][j] = 0;
            }
        }
    }

}
