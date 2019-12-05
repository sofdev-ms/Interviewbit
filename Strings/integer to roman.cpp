// https://www.interviewbit.com/problems/integer-to-roman/

string Solution::intToRoman(int A) {
    map<int , char > m;
    m[1] = 'I';
    m[5] = 'V';
    m[10] = 'X';
    m[50] = 'L';
    m[100] = 'C';
    m[500] = 'D';
    m[1000] = 'M';

    string ans = "";
    int x = A % 1000;
    int y = A/1000;

    A = x;
    while(y!=0)
    {
        ans += 'M';
        y--;
    }

    x = A % 100;
    y = A/100;
    A = x;

    while(y!=0)
    {
        if(y==4)
        {
            ans += "CD";
            y=0;
        }
        else if(y==9)
        {
            ans +="CM";
            y=0;
        }
        else if(y<4)
        {
            ans += 'C';
            y--;
        }
        else
        {
            ans += 'D';
            y-=5;
        }
    }
    x = A % 10;
    y = A/10;
    A = x;

    while(y!=0)
    {
        if(y==4)
        {
            ans += "XL";
            y=0;
        }
        else if(y==9)
        {
            ans +="XC";
            y=0;
        }
        else if(y<4)
        {
            ans += 'X';
            y--;
        }
        else
        {
            ans += 'L';
            y-=5;
        }
    }

    y = A;
    A = x;
    while(y!=0)
    {
        if(y==4)
        {
            ans += "IV";
            y=0;
        }
        else if(y==9)
        {
            ans +="IX";
            y=0;
        }
        else if(y<4)
        {
            ans += 'I';
            y--;
        }
        else
        {
            ans += 'V';
            y-=5;
        }
    }
    return ans;



}
