class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mpp;
        for(int num : arr1)
            mpp[num]++;

        vector<int> x, y;
        for(int num : arr2)
        {
            x.insert(x.end(), mpp[num], num);
            mpp.erase(num);
        }

        for(auto pair : mpp)
        {
            y.insert(y.end(), pair.second, pair.first);
        }

        sort(y.begin(), y.end());

        x.insert(x.end(), y.begin(), y.end());

        return x;
    }
};