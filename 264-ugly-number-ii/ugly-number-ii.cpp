class Solution {
// private:
//     bool isUgly(int n)
//     {
//         while(n % 2 == 0)   n /= 2;
//         while(n % 3 == 0)   n /= 3;
//         while(n % 5 == 0)   n /= 5;

//         return n == 1;
//     }

public:
    int nthUglyNumber(int n) {
        vector<int> uglyNumbers(n);
        uglyNumbers[0] = 1;

        int next2 = 2, next3 = 3, next5 = 5;
        int i2 = 0, i3 = 0, i5 = 0;

        for(int i = 1; i < n; i++)
        {
            int nextUgly = min(next2, min(next3, next5));
            uglyNumbers[i] = nextUgly;

            if(nextUgly == next2)   next2 = uglyNumbers[++i2] * 2;
            if(nextUgly == next3)   next3 = uglyNumbers[++i3] * 3;
            if(nextUgly == next5)   next5 = uglyNumbers[++i5] * 5;
        }

        return uglyNumbers[n - 1];
    }
};