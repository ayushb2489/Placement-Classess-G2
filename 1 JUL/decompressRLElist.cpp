<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

void displayVector (vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

vector <int> decompressRLElist (vector <int> arr)
{
    vector <int> res;
    for (int i = 1; i < arr.size(); i = i + 2   )
    {
        int repeat = arr[i - 1];
        while (repeat--)
            res.push_back (arr[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back (temp);
    }
    vector <int> res = decompressRLElist (arr);
    displayVector (res);
    return 0;
}
=======
#include <iostream>
#include <vector>
using namespace std;

void displayVector (vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

vector <int> decompressRLElist (vector <int> arr)
{
    vector <int> res;
    for (int i = 1; i < arr.size(); i = i + 2   )
    {
        int repeat = arr[i - 1];
        while (repeat--)
            res.push_back (arr[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back (temp);
    }
    vector <int> res = decompressRLElist (arr);
    displayVector (res);
    return 0;
}
>>>>>>> df5d40a (commit)
