/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution
{
public:
    static bool compare(Interval a, Interval b)
    {
        return a.start < b.start;
    }
    bool canAttendMeetings(vector<Interval> &intervals)
    {
        sort(intervals.begin(), intervals.end(), compare);
        int last = -1, i;
        for (auto x : intervals)
        {
            if (x.start < last)
                return false;
            last = x.end;
        }
        return true;
    }
};
