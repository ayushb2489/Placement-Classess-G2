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
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (arr[i] >= arr[j])
        {
            int temp = j;
            j++;
            while (arr[j] == arr[i] && j < n)
                j++;
            if (j < n)
            {
                swap (arr[temp], arr[j]);
                i++;
            }
        }
        else
        {
            i++;
            j++;
        }
    }
    //Size of the acutal array i + 1
    cout << i + 1;
    return 0;
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
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (arr[i] >= arr[j])
        {
            int temp = j;
            j++;
            while (arr[j] == arr[i] && j < n)
                j++;
            if (j < n)
            {
                swap (arr[temp], arr[j]);
                i++;
            }
        }
        else
        {
            i++;
            j++;
        }
    }
    //Size of the acutal array i + 1
    cout << i + 1;
    return 0;
}
>>>>>>> df5d40a (commit)
