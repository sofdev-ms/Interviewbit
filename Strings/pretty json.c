// https://www.interviewbit.com/problems/pretty-json/

vector<string> Solution::prettyJSON(string A) {
    int n = A.length();
    int tab = 0;
    vector<string >  ans ;
    string k = "";
    for(int i=0;i<n;i++)
    {
        if(A[i]=='[' || A[i]=='{')
        {
            k += A[i];
            ans.push_back(k);
            k ="";
            tab++;
            for(int j=0;j<tab;j++)
            {
                k +='\t';
            }
        }
        else if(A[i]==']' || A[i]=='}')
        {
            k="";
            tab--;
            for(int j=0;j<tab;j++)
            {
                k +='\t';
            }
            k+=A[i];
            if(i+1<n && A[i+1]==',')
            {
                k+=A[i+1];
                i++;
            }
            ans.push_back(k);
            k="";
            for(int j=0;j<tab;j++)
            {
                k +='\t';
            }

        }
        else if(A[i]==' ')
        {
            continue;
        }
        else
        {

            while(i<n && A[i]!=',' && A[i]!='}' && A[i]!=']' && A[i]!='{' && A[i]!='[')
            {
                if(A[i]==' ')
                { i++;continue;}
                k+=A[i];
                i++;
            }
            if(i<n && A[i]==',')
            k+=A[i];
            else if(i<n)
            {
                i--;
            }
            ans.push_back(k);
            k="";
            for(int j=0;j<tab;j++)
            {
                k +='\t';
            }
        }
    }
    return ans;
}
