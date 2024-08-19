class Solution {
private:
    void solve(vector<int> nums, set<vector<int>>& res, vector<int> op, int idx)
    {
        if(idx == nums.size())
        {
            sort(op.begin(), op.end());
            res.insert(op);
            return ;
        }

        solve(nums, res, op, idx + 1);
        
        op.push_back(nums[idx]);
        solve(nums, res, op, idx + 1);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> result;
        vector<int> op;

        solve(nums, result, op, 0);
        vector<vector<int>> res2(result.begin(), result.end());
        
        return res2;
    }
};