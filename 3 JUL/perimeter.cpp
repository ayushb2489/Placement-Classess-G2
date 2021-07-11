<<<<<<< HEAD
#include <iostream>
using namespace std;

bool valid (int i, int j, int n)
{
    if (i >= 0 && i < n && j < n && j >= 0)
        return true;
    return false;
}

int getOnesNeighbour (int** arr, int i, int j, int n)
{
    int counter = 0;
    if (valid (i + 1, j, n) && arr[i + 1][j] == 1)
        counter++;
    if (valid (i - 1, j, n) && arr[i - 1][j] == 1)
        counter++;
    if (valid (i, j + 1, n) && arr[i][j + 1] == 1)
        counter++;
    if (valid (i, j - 1, n) && arr[i][j - 1] == 1)
        counter++;
    return counter;
}

int main()
{
    int n;
    cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int onesN;
    int perimeter = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
           onesN = 0;
           if (arr[i][j] == 1)
           {
                onesN = getOnesNeighbour (arr, i, j, n);
                perimeter += (4 - onesN);
           }
        }
    }
    cout << perimeter;
    return 0;
}
=======
#include <iostream>
using namespace std;

bool valid (int i, int j, int n)
{
    if (i >= 0 && i < n && j < n && j >= 0)
        return true;
    return false;
}

int getOnesNeighbour (int** arr, int i, int j, int n)
{
    int counter = 0;
    if (valid (i + 1, j, n) && arr[i + 1][j] == 1)
        counter++;
    if (valid (i - 1, j, n) && arr[i - 1][j] == 1)
        counter++;
    if (valid (i, j + 1, n) && arr[i][j + 1] == 1)
        counter++;
    if (valid (i, j - 1, n) && arr[i][j - 1] == 1)
        counter++;
    return counter;
}

int main()
{
    int n;
    cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int onesN;
    int perimeter = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
           onesN = 0;
           if (arr[i][j] == 1)
           {
                onesN = getOnesNeighbour (arr, i, j, n);
                perimeter += (4 - onesN);
           }
        }
    }
    cout << perimeter;
    return 0;
}
>>>>>>> df5d40a (commit)
