/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool cmp(const Interval& a,const Interval& b){
        return a.start<b.start;
}
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> res;
        sort(intervals.begin(),intervals.end(),cmp);
        if(intervals.empty()) return res;
        Interval tmp(intervals[0].start,intervals[0].end);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i].start>tmp.end){
                res.push_back(tmp);
                tmp.start = intervals[i].start;
                tmp.end = intervals[i].end;
            }else{
                tmp.end = max(tmp.end,intervals[i].end);
            }
        }
        res.push_back(tmp);
        return res;
    }
    
};