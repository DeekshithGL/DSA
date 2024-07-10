class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;

        for(string a : logs)
        {
            if(a[0] == '.')
            {
                if(a[1] == '.')
                    count = max(0, count - 1);
            }
            else
            {
                count++;
            }
        }

        return count;
    }
};