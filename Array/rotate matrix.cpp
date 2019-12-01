// https://www.interviewbit.com/problems/rotate-matrix/
void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    /* METHOD _ 1 (complete brute)
    int n = A.size();
    int r1 = 0;
    int r2 = n - 1;
    int c1 = 0;
    int c2 = n - 1;
    for(int k = 0 ; k < n/2;k++)
    {
        int  i = r1;
        int  j = c1;

        while( j < c2)
        {
            int ni = j;
            int nj = c2;
            int temp = A[i][j];
            while( ni != i || nj != j)
            {
                // cout << ni << "  " << nj << endl;
                // cout << temp << endl;
                int temp1 = A[ni][nj];
                A[ni][nj] = temp;
                temp = temp1;
                if(nj == c2)
                {
                    nj = c1 + r2 - ni;
                    ni = r2;
                }
                else if( ni == r2)
                {
                    ni = nj;
                    nj = c1;
                }
                else if(nj == c1)
                {
                    nj = c1 + r2 - ni;
                    ni = r1;
                }
            }
            A[i][j] = temp;
            j++;
        }
        r1 ++;
        c1 ++;
        r2 --;
        c2 --;

    } */


    // METHOD _ 2 (observation - take transpose of matrix and then reverse matrix columnwise)
    int n = A.size();
    for(int i = 0 ; i < n ; i  ++)
    {
        for(int j = i ; j < n; j++)
        {
            swap(A[i][j] , A[j][i]);
        }
    }
    for(int j = 0 ; j < n/2;  j++)
    {
        for(int i = 0 ; i < n ; i ++)
        swap(A[i][j] , A[i][n - 1 - j]);
    }



}
