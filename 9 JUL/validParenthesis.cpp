<<<<<<< HEAD
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <stack>
using namespace std;

bool isValid (string str)
{
    map <char, char> pairs;
    pairs[')'] = '(';
    pairs[']'] = '[';
    pairs['}'] = '{';
    stack <char> paren;
    int counter = 1;
    int n = str.size();
    paren.push (str[0]);
    while (!paren.empty() && counter < n)
    {
        if (pairs[str[counter]] == paren.top())
            paren.pop();
        else
            paren.push (str[counter]);
        counter++;
    }
    if (paren.empty())
        return true;
    return false;
}

int main()
{
    string str;
    cin >> str;
    if (isValid (str))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
=======
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <stack>
using namespace std;

bool isValid (string str)
{
    map <char, char> pairs;
    pairs[')'] = '(';
    pairs[']'] = '[';
    pairs['}'] = '{';
    stack <char> paren;
    int counter = 1;
    int n = str.size();
    paren.push (str[0]);
    while (!paren.empty() && counter < n)
    {
        if (pairs[str[counter]] == paren.top())
            paren.pop();
        else
            paren.push (str[counter]);
        counter++;
    }
    if (paren.empty())
        return true;
    return false;
}

int main()
{
    string str;
    cin >> str;
    if (isValid (str))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
>>>>>>> df5d40a (commit)
