// https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/

bool c1(float x)
{
    if(x > 0 && x < 2.0/3)
    return true;

    return false;
}
bool c2(float x)
{
    if(x >= 2.0 / 3 && x < 1)
    return true;

    return false;
}
bool c3(float x)
{
    if(x >= 1 && x < 2.0)
    return true;

    return false;
}

int Solution::solve(vector<string> &A) {
    int n = A.size();
    if(n < 3)
    return 0;
    vector < float > temp;
    for(int i = 0 ; i < n ; i ++)
    temp.push_back( atof(A[i].c_str()));

    float max1a = INT_MIN, max2a = INT_MIN ,max3a = INT_MIN ,max1b = INT_MIN;
    float min1a = INT_MAX, min2a = INT_MAX, min1b = INT_MAX , min2b = INT_MAX, min1c = INT_MAX;

    for(int i = 0 ; i <  n ; i ++)
    {
        if(max1a < temp[i] && c1(temp[i]))
        {
            max3a = max2a;
            max2a = max1a;
            max1a = temp[i];
        }
        else if(max2a < temp[i] && c1(temp[i]))
        {
            max3a = max2a;
            max2a = temp[i];
        }
        else if(max3a < temp[i] && c1(temp[i]))
        max3a = temp[i];
        else if(max1b < temp[i] && c2(temp[i]))
        max1b = temp[i];

        if(min1a > temp[i] && c1(temp[i]))
        {
            min2a = min1a;
            min1a = temp[i];
        }
        else if(min2a > temp[i] && c1(temp[i]))
        min2a = temp[i];
        else if(min1b > temp[i] && c2(temp[i]))
        {
            min2b = min1b;
            min1b = temp[i];
        }
        else if(min2b > temp[i] && c2(temp[i]))
        min2b = temp[i];
        else if(min1c > temp[i] && c3(temp[i]))
        min1c = temp[i];



    }
    if(max1a+max2a+max3a > 1.0) {
            return 1;
        } else if((max1a+max2a+max1b > 1.0) && (max1a+max2a+max1b < 2.0)) {
            return 1;
        } else if((min1a+min2a+min1b > 1.0) && (min1a+min2a+min1b < 2.0)) {
            return 1;
        } else if(min1a+min2a+min1c < 2.0) {
            return 1;
        } else if(min1a+min1b+min2b < 2.0) {
            return 1;
        } else if(min1a+min1b+min1c < 2.0) {
            return 1;
        }
        return 0;
}
