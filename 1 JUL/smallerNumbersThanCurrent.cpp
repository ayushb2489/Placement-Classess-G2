<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void displayArray (vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

int binarySearch (vector <int> arr, int key)
{
    int lower = 0;
    int higher = arr.size() - 1;
    while (lower <= higher)
    {
        int mid = (lower + higher) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            higher = mid - 1;
        else
            lower = mid + 1;
    }
    return 1;
}

vector <int> smallerNumbersThanCurrent (vector <int> arr)
{
    vector <int> temp(arr);
    vector <int> res;
    sort (temp.begin(), temp.end());
    for (int i = 0; i < arr.size(); i++)
    {
        int occ = binarySearch (temp, arr[i]);
        while ((occ - 1 >= 0) && temp[occ - 1] == temp[occ])
            occ--;
        res.push_back (occ);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back (temp);
    }
    vector <int> res = smallerNumbersThanCurrent (arr);
    displayArray (res);
    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void displayArray (vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

int binarySearch (vector <int> arr, int key)
{
    int lower = 0;
    int higher = arr.size() - 1;
    while (lower <= higher)
    {
        int mid = (lower + higher) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            higher = mid - 1;
        else
            lower = mid + 1;
    }
    return 1;
}

vector <int> smallerNumbersThanCurrent (vector <int> arr)
{
    vector <int> temp(arr);
    vector <int> res;
    sort (temp.begin(), temp.end());
    for (int i = 0; i < arr.size(); i++)
    {
        int occ = binarySearch (temp, arr[i]);
        while ((occ - 1 >= 0) && temp[occ - 1] == temp[occ])
            occ--;
        res.push_back (occ);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back (temp);
    }
    vector <int> res = smallerNumbersThanCurrent (arr);
    displayArray (res);
    return 0;
}
>>>>>>> df5d40a (commit)
