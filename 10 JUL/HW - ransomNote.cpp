<<<<<<< HEAD
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> freq;
        int n = magazine.size();
        for (int i = 0; i < n; i++)
            freq[magazine[i]]++;
        n = ransomNote.size();
        for (int i = 0; i < n; i++)
        {
            freq[ransomNote[i]]--;
           if (freq[ransomNote[i]] == -1)
               return false;
        }
        return true;
    }
=======
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> freq;
        int n = magazine.size();
        for (int i = 0; i < n; i++)
            freq[magazine[i]]++;
        n = ransomNote.size();
        for (int i = 0; i < n; i++)
        {
            freq[ransomNote[i]]--;
           if (freq[ransomNote[i]] == -1)
               return false;
        }
        return true;
    }
>>>>>>> df5d40a (commit)
};