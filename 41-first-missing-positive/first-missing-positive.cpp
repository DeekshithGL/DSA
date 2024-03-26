class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> mpp;

        for(int i : nums)
            mpp[i]++;

        int num = 1;
        auto it = mpp.begin();
        while(it -> first <= 0 && it != mpp.end())
            it++;

        while(it != mpp.end())
        {
            if(it -> first == num)
                num++;
            else
                return num;

            it++;
        }

        if(it == mpp.end())
            return num;
        return 0;
    }
};