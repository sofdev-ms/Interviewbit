// https://www.interviewbit.com/problems/merge-intervals/
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = intervals.size();
    int i = 0 ;
    vector < Interval > ans;
    int f = 0;
    while( i < n)
    {
        if(newInterval.start > intervals[i].end)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        else if(newInterval.end < intervals[i].start)
        {
            ans.push_back(newInterval);
            f = 1;
            break;
        }
        else
        {
            struct Interval x = {0,0};
            x.start = min(newInterval.start , intervals[i].start);
            while( i < n)
            {
                if(newInterval.end >= intervals[i].start)
                {
                    if(newInterval.end > intervals[i].end)
                    {
                        x.end = newInterval.end;
                        i++;
                    }
                    else
                    {
                        x.end = intervals[i].end;
                        i++;
                        break;
                    }
                }
                else
                break;
            }
            ans.push_back(x);
            f = 1;
            break;
        }

    }
    while( i < n )
    {
        ans.push_back(intervals[i]);
        i++;
    }
    if(!f)
    ans.push_back(newInterval);

    return ans;



}
