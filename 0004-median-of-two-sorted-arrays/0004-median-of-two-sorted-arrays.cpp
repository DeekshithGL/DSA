class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i] < nums2[j])
                mergedArray.push_back(nums1[i++]);
            else
                mergedArray.push_back(nums2[j++]);
        }

        while(i < nums1.size())
            mergedArray.push_back(nums1[i++]);

        while(j < nums2.size())
            mergedArray.push_back(nums2[j++]);

        int x = mergedArray.size();
        if(x % 2 == 1)
            return mergedArray[x / 2];
        else
            return (double)(mergedArray[x / 2] + mergedArray[(x / 2) - 1]) / 2;
    }
};