<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
             cin >> arr[i][j];
    vector <int> oneD;
    //Row Major making one 1d Array
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            oneD.push_back (arr[i][j]);
    int k;
    int newArr[m][n];
    cin >> k;
    k = k % (m * n);
    int startPoint = m * n - k;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                newArr[i][j] = oneD[startPoint % (m * n)];
                startPoint++;
            }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << newArr[i][j] << "\t";
        cout << "\n";
    }
    return 0;
}
=======
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
             cin >> arr[i][j];
    vector <int> oneD;
    //Row Major making one 1d Array
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            oneD.push_back (arr[i][j]);
    int k;
    int newArr[m][n];
    cin >> k;
    k = k % (m * n);
    int startPoint = m * n - k;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                newArr[i][j] = oneD[startPoint % (m * n)];
                startPoint++;
            }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << newArr[i][j] << "\t";
        cout << "\n";
    }
    return 0;
}
>>>>>>> df5d40a (commit)
