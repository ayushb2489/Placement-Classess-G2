<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void displayArray (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i]  << "\t";
    cout << "\n";
}

void copyArray (int* arr, int* temp, int n)
{
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];
}

int nPlace (int* arr, int n)
{
    int temp[n];
    copyArray (arr, temp, n);
    sort (temp, temp + n);
    int counter = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != temp[i])
             counter++;
    return counter;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << nPlace (arr, n);
    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void displayArray (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i]  << "\t";
    cout << "\n";
}

void copyArray (int* arr, int* temp, int n)
{
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];
}

int nPlace (int* arr, int n)
{
    int temp[n];
    copyArray (arr, temp, n);
    sort (temp, temp + n);
    int counter = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != temp[i])
             counter++;
    return counter;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << nPlace (arr, n);
    return 0;
}
>>>>>>> df5d40a (commit)
