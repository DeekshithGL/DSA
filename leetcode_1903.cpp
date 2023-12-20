// Leetcode 1903. Largest Odd Number in String
class Solution {
public:
    string largestOddNumber(string nums) {
        int digit;
        string result = "";
        for(int n = nums.size() - 1; n >= 0; n--)
        {
            digit = nums[n] - '0';
            if(digit % 2 == 1)
            {
                result = nums.substr(0, n + 1);
                break;
            }
        }
        return result;
    }
};
