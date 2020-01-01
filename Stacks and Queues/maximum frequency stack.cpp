// https://www.interviewbit.com/problems/maximum-frequency-stack/?ref=similar_problems

vector<int> Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    map < int ,  int > freq;
    map < int , stack < int > > elements;
    vector < int > ans;
    int mxfreq = 0;
    for(int i =0 ; i < n ; i ++)
    {
        int x = A[i][0];
        if(x == 1)
        {
            ans.push_back(-1);
            int y = A[i][1];
            int temp = freq[y] + 1;
            freq[y] = temp;

            mxfreq = max(mxfreq , temp);
            elements[temp].push(y);
        }
        else
        {
            int z = elements[mxfreq].top();
            ans.push_back(z);
            elements[mxfreq].pop();
            freq[z] --;
            while(mxfreq > 0 && elements[mxfreq].empty())
            mxfreq--;

        }
    }
    return ans;
}
