//https://www.interviewbit.com/problems/spiral-order-matrix-ii/

vector<vector<int> > Solution::generateMatrix(int A) {

    int i1 = 0;
    int i2 = A - 1;
    int j1 = 0;
    int j2 = A - 1;
    int present = 1;
    vector < vector < int > > ans(A , vector < int > (A , 0));
    while(present <= A * A)
    {
        for(int j = j1 ; j <= j2 ; j ++)
        {
            ans[i1][j] = present++ ;
        }
        i1 ++;
        if(present > A * A)
        break;
        for(int i = i1 ; i <=i2 ; i ++)
        ans[i][j2] = present ++;
        if(present > A * A)
        break;
        j2 --;
        for(int j = j2 ; j >= j1 ; j --)
        ans[i2][j] = present ++;
        if(present > A * A)
        break;
        i2 --;
        for(int i = i2 ; i>= i1; i--)
        ans[i][j1] = present ++;
        if(present > A * A)
        break;
        j1++;
    }
    return ans;

}
