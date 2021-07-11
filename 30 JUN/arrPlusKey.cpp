<<<<<<< HEAD
#include <iostream>
using namespace std;

void displayBooleanArray (bool* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}

int maxE (int* arr, int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > temp)
             temp = arr[i];
    return temp;
}

void isGreaterWithKey (int* arr, int n, int key)
{
    bool ret[n];
    int maxElement = maxE (arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + key > maxElement)
            ret[i] = true;
        else
            ret[i] = false;
    }
    displayBooleanArray (ret, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    isGreaterWithKey (arr, n, key);
    return 0;
}
=======
#include <iostream>
using namespace std;

void displayBooleanArray (bool* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}

int maxE (int* arr, int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > temp)
             temp = arr[i];
    return temp;
}

void isGreaterWithKey (int* arr, int n, int key)
{
    bool ret[n];
    int maxElement = maxE (arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + key > maxElement)
            ret[i] = true;
        else
            ret[i] = false;
    }
    displayBooleanArray (ret, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    isGreaterWithKey (arr, n, key);
    return 0;
}
>>>>>>> df5d40a (commit)
