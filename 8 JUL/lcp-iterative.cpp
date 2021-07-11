<<<<<<< HEAD
class Solution {
public:
    
    string lcp (string a, string b)
    {
        int counter = 0;
        int minLength = min (a.size(), b.size());
        for (int i = 0; i < minLength; i++)
            if (a[i] == b[i])
                counter++;
            else
                break;
        return a.substr (0, counter);
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string temp_str = strs[0];
        for (int i = 1; i < strs.size(); i++)
            temp_str = lcp (temp_str, strs[i]);
        return temp_str;
    }
=======
class Solution {
public:
    
    string lcp (string a, string b)
    {
        int counter = 0;
        int minLength = min (a.size(), b.size());
        for (int i = 0; i < minLength; i++)
            if (a[i] == b[i])
                counter++;
            else
                break;
        return a.substr (0, counter);
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string temp_str = strs[0];
        for (int i = 1; i < strs.size(); i++)
            temp_str = lcp (temp_str, strs[i]);
        return temp_str;
    }
>>>>>>> df5d40a (commit)
};