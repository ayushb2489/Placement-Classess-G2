<<<<<<< HEAD
class Solution {
public:
    
    void equalize (string &str, int diff)
    {
        while (diff--)
            str = '0' + str;
    }
    
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        if (n < m)
            equalize (num1, m - n);
        else
            equalize (num2, n - m);
        int maxLength = max (n, m);
        int tempSum;
        int carry = 0;
        string res;
        for (int i = maxLength - 1; i >= 0; i--)
        {
            tempSum = (int)num1[i] + (int)num2[i] - 96 + carry;
            res += (char)((tempSum % 10 + 48));
            carry = tempSum / 10;
        }
        if (carry)
            res += (char)(carry + 48);
        reverse (res.begin(), res.end());
        return res;
    }
=======
class Solution {
public:
    
    void equalize (string &str, int diff)
    {
        while (diff--)
            str = '0' + str;
    }
    
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        if (n < m)
            equalize (num1, m - n);
        else
            equalize (num2, n - m);
        int maxLength = max (n, m);
        int tempSum;
        int carry = 0;
        string res;
        for (int i = maxLength - 1; i >= 0; i--)
        {
            tempSum = (int)num1[i] + (int)num2[i] - 96 + carry;
            res += (char)((tempSum % 10 + 48));
            carry = tempSum / 10;
        }
        if (carry)
            res += (char)(carry + 48);
        reverse (res.begin(), res.end());
        return res;
    }
>>>>>>> df5d40a (commit)
};