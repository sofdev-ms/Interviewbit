// https://www.interviewbit.com/problems/roman-to-integer/

    int Solution::romanToInt(string A) {
        int l=A.length();
        map<char , int > m;
        m.insert(pair <int, int> ('I', 1));
        m.insert(pair <int, int> ('V', 5));
        m.insert(pair <int, int> ('X', 10));
        m.insert(pair <int, int> ('L', 50));
        m.insert(pair <int, int> ('C', 100));
        m.insert(pair <int, int> ('D', 500));
        m.insert(pair <int, int> ('M', 1000));



        int sum=0;
        for(int i=A.length()-1;i>=0;i--)
        {
            char c;
            c=A[i];
            if(i<A.length()-1)
            {
                if(m.find(c)->second<m.find(A[i+1])->second)
                {
                    sum=sum-m.find(c)->second;
                }
                else
                {
                    sum=sum+m.find(c)->second;
                }
            }
            else
            {
                sum=sum+m.find(c)->second;
            }
        }

        return sum;




    }

