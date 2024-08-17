class Solution {
private:
    bool isVowel(char a)
    {
        return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
    }

public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int m = words.size(), n = queries.size();
        vector<int> prefix(m + 1, 0);

        for(int i = 0; i < m; i++)
            prefix[i + 1] = prefix[i] + (isVowel(words[i].front()) && isVowel(words[i].back()) ? 1 : 0);

        vector<int> result;
        for(auto& q : queries)
        {
            int left = q[0], right = q[1];
            result.push_back(prefix[right + 1] - prefix[left]);
        }

        return result;
    }
};