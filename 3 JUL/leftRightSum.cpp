<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    int queries;
    cin >> queries;
    int left, right;
    for (int i = 0; i < queries; i++)
    {
        cin >> left >> right;
        if (left - 1 >= 0)
            cout << prefixSum[right] - prefixSum[left - 1];
        else
            cout << prefixSum[right];
        cout << "\n";
    }
}
=======
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    int queries;
    cin >> queries;
    int left, right;
    for (int i = 0; i < queries; i++)
    {
        cin >> left >> right;
        if (left - 1 >= 0)
            cout << prefixSum[right] - prefixSum[left - 1];
        else
            cout << prefixSum[right];
        cout << "\n";
    }
}
>>>>>>> df5d40a (commit)
