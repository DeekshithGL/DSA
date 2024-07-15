class Solution {
    vector<int> getNSL(vector<int> arr, int n)
    {
        vector<int> result(n);
        stack<int> stk;

        for(int i = 0; i < n; i++)
        {
            if(i == 0)
                result[i] = -1;
            else
            {
                while(!stk.empty() && arr[stk.top()] >= arr[i])
                    stk.pop();
                
                result[i] = stk.empty() ? -1 : stk.top();
            }

            stk.push(i);
        }

        return result;
    }

    vector<int> getNSR(vector<int> arr, int n)
    {
        vector<int> result(n);
        stack<int> stk;

        for(int i = n - 1; i >= 0; i--)
        {
            if(i == n - 1)
                result[i] = n;
            else
            {
                while(!stk.empty() && arr[stk.top()] > arr[i])
                    stk.pop();
                
                result[i] = stk.empty() ? n : stk.top();
            }

            stk.push(i);
        }

        return result;
    }

public:
    int sumSubarrayMins(vector<int>& arr) 
    {
        long long sum = 0;
        long MOD = 1e9 + 7;

        int n = arr.size();
        vector<int> NSL = getNSL(arr, n);
        vector<int> NSR = getNSR(arr, n);

        for(int i = 0; i < n; i++)
        {
            int left = i - NSL[i];
            int right = NSR[i] - i;
            long ways = left * right;
            long sum2 = (arr[i] * ways) % MOD;

            sum = (sum + sum2) % MOD;            
        }

        return sum;
    }
};