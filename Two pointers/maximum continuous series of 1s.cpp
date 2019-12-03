https://www.interviewbit.com/problems/max-continuous-series-of-1s/

vector<int> Solution::maxone(vector<int> &A, int B) {
    int n = A.size();
    int start = -1;
    int end = -1 ;
    int ans = 0;
    if( B == 0)
    {
        int c = 0;
        for(int i = 0; i < n ; i ++)
        {
            if(A[i] == 1)
            c++;
            else if(A[i] == 0)
            {
                if(c > ans)
                {
                    ans = c;
                    start = i - c;
                    end = i - 1;
                }
                c = 0;
            }
        }
        if(c > ans)
        {
            ans = c;
            start = n - c;
            end = n - 1;
        }
        vector < int > ans1;
        for(int i = start; i<=end; i++)
        ans1.push_back(i);
        return ans1;
    }

    int i = 0;
    int c = 0 ;
    while( i < n )
    {
        if(A[i] == 0)
        {
            if(c == B)
            break;
            c++;
        }
        i++;
    }
    ans = i;
    start = 0;
    end = i - 1;
    int j = i;
    i = 0;
    while( j < n)
    {
        while( i < j && c == B)
        {
            if(A[i] == 0)
            c--;

            i++;
        }
        c = B;
        j++;
        while( j < n && A[j]!=0)
        {
            j++;
        }
        if(j - i > ans)
        {
            ans = j - i;
            start = i;
            end = j - 1;
        }
    }
    vector < int > ans1;
        for(int i = start; i<=end; i++)
        ans1.push_back(i);
        return ans1;


}
