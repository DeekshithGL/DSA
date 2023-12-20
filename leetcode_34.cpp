// Leetcode 34. Find the first and last position of element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int start = -1, end = -1;
        for(auto i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
                if(start == -1)
                    start = i, end = i;
                else
                    end = i;
        }

        return {start, end};
    }
};
