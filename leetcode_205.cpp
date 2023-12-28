class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> mpp1, mpp2;
        for(auto a = 0; a < s.size(); a++)
            mpp1[s[a]].push_back(a);

        for(auto a = 0; a < s.size(); a++)
            mpp2[t[a]].push_back(a);
        
        for(auto i = 0; i < s.size(); i++)
            if(mpp1[s[i]] != mpp2[t[i]])
                return false;
                
        return true;
    }
};
