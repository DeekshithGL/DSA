class Solution {
    private:
    bool isVowel(char a){
        a = tolower(a);
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            return true;
        else
            return false;
    }
public:
    string sortVowels(string s) {
        vector<int> vec;
        string vowels = "";
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                vec.push_back(i);
                vowels += s[i];
            }
        }

        sort(vowels.begin(), vowels.end());
        int x = 0;
        for(int i : vec){
            s[i] = vowels[x++];
        }

        return s;
    }
};