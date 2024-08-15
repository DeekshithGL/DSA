class Solution {
public:
    int uptoK(vector<int>& nums, int k)
    {
        unordered_map<int, int> mpp;

        int left = 0, right = 0, count = 0; 

        for(right = 0; right < nums.size(); right++)
        {
            mpp[nums[right]]++;

            while(mpp.size() > k)
            {
                mpp[nums[left]]--;
                if(mpp[nums[left]] == 0)
                    mpp.erase(nums[left]);
                left++;
            }

            count += right - left + 1;
        }

        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return uptoK(nums, k) - uptoK(nums, k - 1);
    }
};