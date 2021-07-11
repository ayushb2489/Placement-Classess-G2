<<<<<<< HEAD
#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

/*void displayVectorString (vector <string> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
    cout << "\n";
}*/

int getDifferent (map <char, string> hashed, vector <string> input)
{
    string temp = "";
    set <string> uniq;
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < input[i].size(); j++)
            temp += (hashed[input[i][j]]);
        cout << temp << '\n';
        uniq.insert (temp);
        temp.clear();
    }
    return uniq.size();
}

int main()
{
    string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    map <char, string> hashed;
    int j = 97;
    for (int i = 0; i < 26; i++)
        hashed.insert ({j++, arr[i]});
    vector <string> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        input.push_back (temp);
    }
    cout << getDifferent (hashed, input);
    return 0;
}
=======
#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

/*void displayVectorString (vector <string> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
    cout << "\n";
}*/

int getDifferent (map <char, string> hashed, vector <string> input)
{
    string temp = "";
    set <string> uniq;
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < input[i].size(); j++)
            temp += (hashed[input[i][j]]);
        cout << temp << '\n';
        uniq.insert (temp);
        temp.clear();
    }
    return uniq.size();
}

int main()
{
    string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    map <char, string> hashed;
    int j = 97;
    for (int i = 0; i < 26; i++)
        hashed.insert ({j++, arr[i]});
    vector <string> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        input.push_back (temp);
    }
    cout << getDifferent (hashed, input);
    return 0;
}
>>>>>>> df5d40a (commit)
