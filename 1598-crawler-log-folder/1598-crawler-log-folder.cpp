class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;

        for(string a : logs)
        {
            if(a == "../")
            {
                count = max(0, count - 1);
            }
            else if(a != "./")
            {
                count++;
            }
        }

        return count;
    }
};