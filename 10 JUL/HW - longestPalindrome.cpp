<<<<<<< HEAD
class Solution {
public:
    
    static bool compare (pair <char, int> a, pair <char, int> b)
    {
        return a.second < b.second;
    }
    
    int longestPalindrome(string s) {
        int n = s.size();
        map <char, int> freq;
        for (int i = 0; i < n; i++)
            freq[s[i]]++;
        vector <pair <char, int> > newFreq;
        for (auto i : freq)
            newFreq.push_back (make_pair (i.first, i.second));
        sort (newFreq.begin(), newFreq.end(), compare);
        int newLen = newFreq.size();
        bool firstOdd = false;
        int sum = 0;
        for (int i = newLen - 1; i >= 0; i--)
        {
            if (newFreq[i].second % 2 == 0)
                sum += newFreq[i].second;
            else if (!firstOdd)
            {
                sum += newFreq[i].second;
                firstOdd = true;
            }
            else
                sum += newFreq[i].second - 1;
        }
        return sum;
    }
=======
class Solution {
public:
    
    static bool compare (pair <char, int> a, pair <char, int> b)
    {
        return a.second < b.second;
    }
    
    int longestPalindrome(string s) {
        int n = s.size();
        map <char, int> freq;
        for (int i = 0; i < n; i++)
            freq[s[i]]++;
        vector <pair <char, int> > newFreq;
        for (auto i : freq)
            newFreq.push_back (make_pair (i.first, i.second));
        sort (newFreq.begin(), newFreq.end(), compare);
        int newLen = newFreq.size();
        bool firstOdd = false;
        int sum = 0;
        for (int i = newLen - 1; i >= 0; i--)
        {
            if (newFreq[i].second % 2 == 0)
                sum += newFreq[i].second;
            else if (!firstOdd)
            {
                sum += newFreq[i].second;
                firstOdd = true;
            }
            else
                sum += newFreq[i].second - 1;
        }
        return sum;
    }
>>>>>>> df5d40a (commit)
};