<<<<<<< HEAD
#include <iostream>
using namespace std;

void displayArray (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0, j = n / 2;
    int rArr[n];
    int counter = 0;
    while (counter < n)
    {
        if (counter % 2 == 0)
            rArr[counter++] = arr[i++];
        else
        {
            rArr[counter++] = arr[j++];
        }
    }
    displayArray (rArr, n);
    return 0;
}
=======
#include <iostream>
using namespace std;

void displayArray (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0, j = n / 2;
    int rArr[n];
    int counter = 0;
    while (counter < n)
    {
        if (counter % 2 == 0)
            rArr[counter++] = arr[i++];
        else
        {
            rArr[counter++] = arr[j++];
        }
    }
    displayArray (rArr, n);
    return 0;
}
>>>>>>> df5d40a (commit)
