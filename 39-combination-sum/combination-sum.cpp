class Solution {
private:
    vector<vector<int>> result;

    void solve(vector<int>& cand, int target, vector<int>& op, int sum, int idx)
    {
        if(sum == target)
        {
            result.push_back(op);
            return ;
        }

        if(idx >= cand.size() || sum > target)
            return ;

        op.push_back(cand[idx]);
        solve(cand, target, op, sum + cand[idx], idx);

        op.pop_back();
        solve(cand, target, op, sum, idx + 1);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        solve(candidates, target, output, 0, 0);

        return result;
    }
};