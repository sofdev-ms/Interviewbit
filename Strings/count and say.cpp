// https://www.interviewbit.com/problems/count-and-say/

string Solution::countAndSay(int A) {
    if(A == 1)
    return "1";

    string temp = "1";
    int n = 1;
    for(int i = 2; i<= A; i++)
    {
        string temp1 = "";
        int j = 0;
        int n1 = 0;
        while( j < n)
        {
            int count = 0;
            char c = temp[j];
            while(j < n && temp[j] == c)
            {
                count ++;
                j++;
            }
            n1+=2;
            temp1 += to_string(count);
            temp1 += c;
        }

        n = n1;
        temp =temp1;
    }
    return temp;
}
