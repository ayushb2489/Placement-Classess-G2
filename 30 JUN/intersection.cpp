<<<<<<< HEAD
#include <iostream>
#include <map>
#include <set>
using namespace std;

void displaySet (set <int> uniq)
{
    for (auto i:uniq)
        cout << i << "\t";
}

set<int> intersection (int* arr1, int* arr2, int n, int m)
{
    map <int, int> freq;
    set <int> uniq;
    for (int i = 0; i < n; i++)
        freq[arr1[i]]++;
    for (int i = 0; i < m; i++)
        if (freq[arr2[i]])
            uniq.insert (arr2[i]);
    return uniq;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    set<int> interS = intersection (arr1, arr2, m, n);
    displaySet (interS);
    return 0;
}
=======
#include <iostream>
#include <map>
#include <set>
using namespace std;

void displaySet (set <int> uniq)
{
    for (auto i:uniq)
        cout << i << "\t";
}

set<int> intersection (int* arr1, int* arr2, int n, int m)
{
    map <int, int> freq;
    set <int> uniq;
    for (int i = 0; i < n; i++)
        freq[arr1[i]]++;
    for (int i = 0; i < m; i++)
        if (freq[arr2[i]])
            uniq.insert (arr2[i]);
    return uniq;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    set<int> interS = intersection (arr1, arr2, m, n);
    displaySet (interS);
    return 0;
}
>>>>>>> df5d40a (commit)
