// https://www.interviewbit.com/problems/merge-overlapping-intervals/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool comp(const Interval & a , const Interval & b)
 {
     if(a.start == b.start)
     return a.end < b.end;

     return a.start < b.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    int i = 0;
    sort(A.begin() , A.end() , comp);
    vector <Interval > ans;
    while( i < n )
    {
        struct Interval x = {A[i].start , A[i].end};
        i++;
        while(i < n)
        {
            if(A[i].start > x.end)
            {
                ans.push_back(x);
                break;
            }
            else
            x.end = max( x.end , A[i].end);

            i++;
        }
        if( i == n)
        ans.push_back(x);
    }

    return ans;


}
