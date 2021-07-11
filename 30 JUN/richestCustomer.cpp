<<<<<<< HEAD
#include <iostream>
using namespace std;

int maxCustomer (int** arr, int row, int col)
{
    int customer, maxS = 0;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
            sum += arr[i][j];
        if (sum > maxS)
        {
            maxS = sum;
            customer = i + 1;
        }
    }
    return customer;
}

int main()
{
    int row, col;
    cin >> row >> col;
    int** arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
        for (int j = 0; j < col; j++)
             cin >> arr[i][j];
    }
    cout << maxCustomer (arr, row, col);
    return 0;
}
=======
#include <iostream>
using namespace std;

int maxCustomer (int** arr, int row, int col)
{
    int customer, maxS = 0;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
            sum += arr[i][j];
        if (sum > maxS)
        {
            maxS = sum;
            customer = i + 1;
        }
    }
    return customer;
}

int main()
{
    int row, col;
    cin >> row >> col;
    int** arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
        for (int j = 0; j < col; j++)
             cin >> arr[i][j];
    }
    cout << maxCustomer (arr, row, col);
    return 0;
}
>>>>>>> df5d40a (commit)
