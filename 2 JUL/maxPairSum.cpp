<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxPairSum (int* arr, int n)
{
    int ms = 0;
    sort (arr, arr + n);
    for (int i = 0; i < n; i += 2)
        ms += arr[i];
    return ms;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxPairSum (arr, n);
    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxPairSum (int* arr, int n)
{
    int ms = 0;
    sort (arr, arr + n);
    for (int i = 0; i < n; i += 2)
        ms += arr[i];
    return ms;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxPairSum (arr, n);
    return 0;
}
>>>>>>> df5d40a (commit)
