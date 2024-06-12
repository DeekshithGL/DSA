class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for(int num : nums)
            mpp[num]++;

        nums.clear();
        nums.insert(nums.end(), mpp[0], 0);
        nums.insert(nums.end(), mpp[1], 1);
        nums.insert(nums.end(), mpp[2], 2);
    }
};