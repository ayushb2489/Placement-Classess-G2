<<<<<<< HEAD
#include <iostream>
using namespace std;

void display2dArray (int** arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
}

bool valid (int** arr, int m, int n, int i, int j)
{
    if (i >= 0 && i < m && j >= 0 && j < n)
    {
        if (arr[i][j] == 1)
            return true;
    }
    return false;
}

void spreadCorona (int** arr, int m, int n, int sr, int sc)
{
    arr[sr][sc] = 2;
    if (valid (arr, m, n, sr + 1, sc))
        spreadCorona (arr, m, n, sr + 1, sc);
    if (valid (arr, m, n, sr - 1, sc))
        spreadCorona (arr, m, n, sr - 1, sc);
    if (valid (arr, m, n, sr, sc + 1))
        spreadCorona (arr, m, n, sr, sc + 1);
    if (valid (arr, m, n, sr, sc - 1))
        spreadCorona (arr, m, n, sr, sc - 1 );
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
    int sr, sc;
    cin >> sr >> sc;
    spreadCorona (arr, m, n, sr, sc);
    display2dArray (arr, m, n);
    return 0;
}
=======
#include <iostream>
using namespace std;

void display2dArray (int** arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
}

bool valid (int** arr, int m, int n, int i, int j)
{
    if (i >= 0 && i < m && j >= 0 && j < n)
    {
        if (arr[i][j] == 1)
            return true;
    }
    return false;
}

void spreadCorona (int** arr, int m, int n, int sr, int sc)
{
    arr[sr][sc] = 2;
    if (valid (arr, m, n, sr + 1, sc))
        spreadCorona (arr, m, n, sr + 1, sc);
    if (valid (arr, m, n, sr - 1, sc))
        spreadCorona (arr, m, n, sr - 1, sc);
    if (valid (arr, m, n, sr, sc + 1))
        spreadCorona (arr, m, n, sr, sc + 1);
    if (valid (arr, m, n, sr, sc - 1))
        spreadCorona (arr, m, n, sr, sc - 1 );
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
    int sr, sc;
    cin >> sr >> sc;
    spreadCorona (arr, m, n, sr, sc);
    display2dArray (arr, m, n);
    return 0;
}
>>>>>>> df5d40a (commit)
