class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> stk;
        int gain = 0;
        int process = (x > y) ? 1 : 0;

        if(process == 1)
        {
            for(char p : s)
            {
                if(stk.empty())
                    stk.push(p);
                else
                {
                    if(p == 'b' && stk.top() == 'a')
                    {
                        gain += x;
                        stk.pop();
                    }
                    else
                        stk.push(p);
                }
            }
        }
        else
        {
            for(char p : s)
            {
                if(stk.empty())
                    stk.push(p);
                else
                {
                    if(p == 'a' && stk.top() == 'b')
                    {
                        gain += y;
                        stk.pop();
                    }
                    else
                        stk.push(p);
                }
            }
        }

        string re;
        while(!stk.empty())
        {
            re += stk.top();
            stk.pop();
        }
        reverse(re.begin(), re.end());

        for(char p : re)
        {
            if(!stk.empty() && ((process == 1 && p == 'a' && stk.top() == 'b') || (process == 0 && p == 'b' && stk.top() == 'a')))
            {
                if(process == 1)
                    gain += y;
                else
                    gain += x;
                
                stk.pop();
            }
            else
            {
                stk.push(p);
            }
        }

        return gain;
    }
};