class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        set<int> visited;

        for(auto i : nums)
            if(visited.find(i) != visited.end())
                return i;
            else
                visited.insert(i);

        return -1;
    }
};