class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> mySet;
        vector<int> result;

        for(int i : nums)
            if(mySet.find(i) == mySet.end())
                mySet.insert(i);
            else
                result.push_back(i);

        return result;
    }
};