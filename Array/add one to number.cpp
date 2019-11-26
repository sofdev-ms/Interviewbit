// https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    int i = n - 1;
    while(i >= 0)
    {
        if(A[i] == 9)
        A[i] = 0;
        else
        {
            A[i] = A[i] + 1;
            break;
        }
        i--;
    }
    if( i == -1)
    A.insert(A.begin() , 1);
    else
    {
        int i = 0;
        while(A[i] == 0)
        {
            A.erase(A.begin());
        }

    }
    return A;

}

