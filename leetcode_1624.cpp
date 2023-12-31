// Largest Substring between two equal characters

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int result = -1;
        map<char, vector<int>> mpp;

        for(auto i = 0; i < s.size(); i++)
            mpp[s[i]].push_back(i);
        
        for(auto it : mpp)
        {
            if(it.second.size() > 1)
            {        
                result = max(result, it.second[it.second.size() - 1] - it.second[0]);
            }
        }

        if(result == -1)
            return result;
        return result - 1;
    }
};
