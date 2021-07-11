<<<<<<< HEAD
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        int n = s.size();
        map <char, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
            freq[t[i]]--;
        }
        int sum = 0;
        for (auto i : freq)
            if (i.second)
                return false;
        return true;
    }
=======
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        int n = s.size();
        map <char, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
            freq[t[i]]--;
        }
        int sum = 0;
        for (auto i : freq)
            if (i.second)
                return false;
        return true;
    }
>>>>>>> df5d40a (commit)
};