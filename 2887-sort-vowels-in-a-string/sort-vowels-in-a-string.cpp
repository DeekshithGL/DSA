class Solution {
    private:
    bool isVowel(char a){
        static const string vowels = "aeiouAEIOU";
        return vowels.find(a) != string::npos;
    }
public:
    string sortVowels(string s) {
        vector<char> vowels;
        
        for(char c : s){
            if(isVowel(c))
                vowels.push_back(c);
        }

        sort(vowels.begin(), vowels.end());

        int idx = 0;
        for(char &c : s){
            if(isVowel(c))
                c = vowels[idx++];
        }

        return s;
    }
};