<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate (vector <vector <int> > &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            swap (arr[i][j], arr[j][i]);
        reverse (arr[i].begin(), arr[i].end());
    }
}

bool sameByRotation (vector <vector <int> > arr1, vector <vector <int> > arr2)
{
    int k = 3;
    if (arr1 == arr2)
        return true;
    while (k--)
    {
        rotate (arr1);
        if (arr1 == arr2)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector <int> temp_arr;
    int temp;
    vector <vector <int> > arr1;
    vector <vector <int> > arr2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            temp_arr.push_back (temp);
        }
        arr1.push_back (temp_arr);
        temp_arr.clear();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            temp_arr.push_back (temp);
        }
        arr2.push_back (temp_arr);
        temp_arr.clear();
    }
    if (sameByRotation (arr1, arr2))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate (vector <vector <int> > &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            swap (arr[i][j], arr[j][i]);
        reverse (arr[i].begin(), arr[i].end());
    }
}

bool sameByRotation (vector <vector <int> > arr1, vector <vector <int> > arr2)
{
    int k = 3;
    if (arr1 == arr2)
        return true;
    while (k--)
    {
        rotate (arr1);
        if (arr1 == arr2)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector <int> temp_arr;
    int temp;
    vector <vector <int> > arr1;
    vector <vector <int> > arr2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            temp_arr.push_back (temp);
        }
        arr1.push_back (temp_arr);
        temp_arr.clear();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            temp_arr.push_back (temp);
        }
        arr2.push_back (temp_arr);
        temp_arr.clear();
    }
    if (sameByRotation (arr1, arr2))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
>>>>>>> df5d40a (commit)
