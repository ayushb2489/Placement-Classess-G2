<<<<<<< HEAD
#include <iostream>
#include <map>
using namespace std;

int goodPairs (int* arr, int n)
{
    int gp = 0;
    map <int ,int> pairs;
    for (int i = 0; i < n; i++)
    {
        pairs[arr[i]]++;
        if (pairs[arr[i]] > 1)
           gp += pairs[arr[i]] - 1;
    }
    return gp;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << goodPairs (arr, n);
    return 0;
}

=======
#include <iostream>
#include <map>
using namespace std;

int goodPairs (int* arr, int n)
{
    int gp = 0;
    map <int ,int> pairs;
    for (int i = 0; i < n; i++)
    {
        pairs[arr[i]]++;
        if (pairs[arr[i]] > 1)
           gp += pairs[arr[i]] - 1;
    }
    return gp;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << goodPairs (arr, n);
    return 0;
}

>>>>>>> df5d40a (commit)
