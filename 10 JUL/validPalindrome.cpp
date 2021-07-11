<<<<<<< HEAD
class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (isalnum (s[i]))
                newStr += tolower (s[i]);
        }
        string checkStr = newStr;
        reverse (newStr.begin(), newStr.end());
        if (checkStr == newStr)
            return true;
        return false;
    }
=======
class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (isalnum (s[i]))
                newStr += tolower (s[i]);
        }
        string checkStr = newStr;
        reverse (newStr.begin(), newStr.end());
        if (checkStr == newStr)
            return true;
        return false;
    }
>>>>>>> df5d40a (commit)
};