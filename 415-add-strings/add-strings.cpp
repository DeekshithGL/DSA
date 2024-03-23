class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        
        int carry = 0;
        int i = num1.size() - 1, j = num2.size() - 1;

        while(i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            sum += (i >= 0) ? num1[i--] - '0' : 0;
            sum += (j >= 0) ? num2[j--] - '0' : 0;

            carry = sum / 10;
            result = to_string(sum % 10) + result;
        }

        return result;
    }
};