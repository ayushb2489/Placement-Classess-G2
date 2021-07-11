<<<<<<< HEAD
#include <iostream>
using namespace std;

bool lucky (int** arr, int m, int n, int ii, int ji)
{
    for (int j = 0; j < n; j++)
        if (j != ji && arr[ii][j] < arr[ii][ji])
            return false;
    for (int i = 0; i < m; i++)
        if (i != ii && arr[i][ji] > arr[ii][ji])
            return false;
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int** arr = new int*[m];;
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (lucky (arr, m, n, i, j))
            {
                cout << arr[i][j];
                return 0;
            }
    return 0;
}
=======
#include <iostream>
using namespace std;

bool lucky (int** arr, int m, int n, int ii, int ji)
{
    for (int j = 0; j < n; j++)
        if (j != ji && arr[ii][j] < arr[ii][ji])
            return false;
    for (int i = 0; i < m; i++)
        if (i != ii && arr[i][ji] > arr[ii][ji])
            return false;
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int** arr = new int*[m];;
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (lucky (arr, m, n, i, j))
            {
                cout << arr[i][j];
                return 0;
            }
    return 0;
}
>>>>>>> df5d40a (commit)
