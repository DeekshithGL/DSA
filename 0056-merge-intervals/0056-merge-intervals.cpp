class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;

        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            return a[0] < b[0];
        });

        vector<int> curr(intervals[0].begin(), intervals[0].end());

        for(int i = 1; i < intervals.size(); i++)
        {
            if(curr[1] >= intervals[i][0])
                curr[1] = max(curr[1], intervals[i][1]);
            else
            {
                result.push_back(curr);
                curr = intervals[i];
            }
        }

        result.push_back(curr);

        return result;
    }
};