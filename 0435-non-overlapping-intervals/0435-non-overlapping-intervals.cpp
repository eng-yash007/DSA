class Solution {
public:

    static bool comp(vector<int> v1, vector<int> v2){
        return v1[1]<v2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        int remove = 0;
        int lastend = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] >= lastend){
                lastend = intervals[i][1];
            }
            else{
                remove++;
            }
        }
        return remove;
    }
};