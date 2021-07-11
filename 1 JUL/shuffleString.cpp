<<<<<<< HEAD
#include <iostream>
using namespace std;

void displayStringArray (string* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    string arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    string res[n];
    for (int i = 0; i < n; i++)
        res[arr1[i]] = arr2[i];
    displayStringArray (res, n);
    return 0;
}
=======
#include <iostream>
using namespace std;

void displayStringArray (string* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    string arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    string res[n];
    for (int i = 0; i < n; i++)
        res[arr1[i]] = arr2[i];
    displayStringArray (res, n);
    return 0;
}
>>>>>>> df5d40a (commit)
