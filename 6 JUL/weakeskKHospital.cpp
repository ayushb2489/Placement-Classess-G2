<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void weakestK (int** arr, int m, int n, int k)
{
    vector <pair <int, int>> ones;
    int tempO;
    for (int i = 0; i < m; i++)
    {
        tempO = 0;
        for (int j = 0; j < n; j++)
            tempO += arr[i][j];
        ones.push_back (make_pair (tempO, i));
    }
    sort (ones.begin(), ones.end());
    for (int i = 0; i < k; i++)
        cout << ones[i].second << "\t";
}

int main()
{
    int m, n;
    cin >> m >> n;
    int** arr = new int*[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int k;
    cin >> k;
    weakestK (arr, m, n, k);
    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void weakestK (int** arr, int m, int n, int k)
{
    vector <pair <int, int>> ones;
    int tempO;
    for (int i = 0; i < m; i++)
    {
        tempO = 0;
        for (int j = 0; j < n; j++)
            tempO += arr[i][j];
        ones.push_back (make_pair (tempO, i));
    }
    sort (ones.begin(), ones.end());
    for (int i = 0; i < k; i++)
        cout << ones[i].second << "\t";
}

int main()
{
    int m, n;
    cin >> m >> n;
    int** arr = new int*[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int k;
    cin >> k;
    weakestK (arr, m, n, k);
    return 0;
}
>>>>>>> df5d40a (commit)
