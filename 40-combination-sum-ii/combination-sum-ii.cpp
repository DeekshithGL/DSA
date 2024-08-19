class Solution {
private:
    vector<vector<int>> result;

    void solve(vector<int>& cand, vector<int>& op, int target, int sum, int idx)
    {
        if(sum == target)
        {
            result.push_back(op);
            return ;
        }
        if(sum > target || idx >= cand.size())
            return ;
            
        for(int i = idx; i < cand.size(); i++)
        {
            if(i > idx && cand[i] == cand[i - 1])
                continue;

            op.push_back(cand[i]);
            solve(cand, op, target, sum + cand[i], i + 1);
            op.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> op;
        sort(candidates.begin(), candidates.end());
        solve(candidates, op, target, 0, 0);

        return result;
    }
};