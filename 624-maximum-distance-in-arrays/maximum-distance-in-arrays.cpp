class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min1 = INT_MAX, min2 = INT_MAX, minIdx = -1;
        int max1 = INT_MIN, max2 = INT_MIN, maxIdx = -1;

        for(int i = 0; i < arrays.size(); i++)
        {
            if(arrays[i].front() < min1)
                min2 = min1, min1= arrays[i].front(), minIdx = i;
            else if(arrays[i].front() < min2)
                min2 = arrays[i].front();

            if(arrays[i].back() > max1)
                max2 = max1, max1 = arrays[i].back(), maxIdx = i;
            else if(arrays[i].back() > max2)
                max2 = arrays[i].back();
        }

        return (minIdx != maxIdx) ? (max1 - min1) : max((max1 - min2), (max2 - min1));
    }
};