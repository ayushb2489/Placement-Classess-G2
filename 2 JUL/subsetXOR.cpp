<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int sXOR (int* arr, int n, int index, int sum)
{
    if (index == n)
        return sum;
    return sXOR (arr, n, index + 1, sum ^ arr[index]) + sXOR (arr, n, index + 1, sum);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << sXOR (arr, n, 0, 0);
    return 0;
}
=======
#include <iostream>
#include <vector>
using namespace std;

int sXOR (int* arr, int n, int index, int sum)
{
    if (index == n)
        return sum;
    return sXOR (arr, n, index + 1, sum ^ arr[index]) + sXOR (arr, n, index + 1, sum);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << sXOR (arr, n, 0, 0);
    return 0;
}
>>>>>>> df5d40a (commit)
