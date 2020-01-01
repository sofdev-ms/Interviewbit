//https://www.interviewbit.com/problems/largest-number/

bool comp(const string x , const string y)
{
    string a1 = x + y;
    string a2 = y + x;

    return a1 > a2;
}

string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector < string > temp;

    for(int i = 0 ; i < n; i ++)
    temp.push_back(to_string(A[i]));

    sort(temp.begin() , temp.end() , comp);

    string ans = "";
    for(int i = 0 ; i < n ; i ++)
    ans += temp[i];


    if(ans[0] == '0')
    return "0";

    return ans;



}
