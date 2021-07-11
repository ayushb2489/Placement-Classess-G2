<<<<<<< HEAD
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int romanToInt (string roman)
{
    map <char, int> value;
    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;
    int intValue = 0;
    int n = roman.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (value[roman[i]] < value[roman[i +1]])
            intValue -= value[roman[i]];
        else
            intValue += value[roman[i]];
    }
    intValue += value[roman[n - 1]];
    return intValue;
}
int main()
{
    string roman;
    cin >> roman;
    cout << romanToInt (roman);
    return 0;
}
=======
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int romanToInt (string roman)
{
    map <char, int> value;
    value['I'] = 1;
    value['V'] = 5;
    value['X'] = 10;
    value['L'] = 50;
    value['C'] = 100;
    value['D'] = 500;
    value['M'] = 1000;
    int intValue = 0;
    int n = roman.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (value[roman[i]] < value[roman[i +1]])
            intValue -= value[roman[i]];
        else
            intValue += value[roman[i]];
    }
    intValue += value[roman[n - 1]];
    return intValue;
}
int main()
{
    string roman;
    cin >> roman;
    cout << romanToInt (roman);
    return 0;
}
>>>>>>> df5d40a (commit)
