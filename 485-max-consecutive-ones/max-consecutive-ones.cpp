class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0;

        for(int num : nums)
        {
            if(num == 0)
            {
                maxCount = max(maxCount, count);
                count = 0;
            }
            else
                count++;
        }

        return max(count, maxCount);
    }
};