<<<<<<< HEAD
class Solution {
public:
    bool isVowel (char a)
    {
        return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O'  || a == 'U');
    }
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        while (i < j)
        {
            bool isi = false, isj = false;
            while (i < j && !isVowel (s[i]))
                i++;
            while (j > i && !isVowel (s[j]))
                j--;
            if (i < j)
            {
                swap (s[i], s[j]);
                i++;
                j--;
            }
            else
                break;
        }
        return s;
    }
=======
class Solution {
public:
    bool isVowel (char a)
    {
        return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O'  || a == 'U');
    }
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        while (i < j)
        {
            bool isi = false, isj = false;
            while (i < j && !isVowel (s[i]))
                i++;
            while (j > i && !isVowel (s[j]))
                j--;
            if (i < j)
            {
                swap (s[i], s[j]);
                i++;
                j--;
            }
            else
                break;
        }
        return s;
    }
>>>>>>> df5d40a (commit)
};