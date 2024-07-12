class Solution {
public:
    string reverseParentheses(string s) {
        string curr = "";
        stack<string> stk;

        for(char a : s)
        {
            if(a == '(')
            {
                stk.push(curr);
                curr = "";
            }
            else if(a == ')')
            {
                reverse(curr.begin(), curr.end());
                curr = stk.top() + curr;
                stk.pop();
            }
            else
            {
                curr += a;
            }
        }

        return curr;
    }
};