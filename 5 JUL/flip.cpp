<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print2dArr (vector <vector <int> > arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
}

void flip (vector <vector <int> > &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
        reverse (arr[i].begin(), arr[i].end());
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = !arr[i][j];
}

int main()
{
    int n;
    cin >> n;
    vector <vector <int> > arr;
    vector <int> temp;
    int input;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            temp.push_back (input);
        }
        arr.push_back (temp);
    }
    flip (arr);
    print2dArr (arr);
    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print2dArr (vector <vector <int> > arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
}

void flip (vector <vector <int> > &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
        reverse (arr[i].begin(), arr[i].end());
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = !arr[i][j];
}

int main()
{
    int n;
    cin >> n;
    vector <vector <int> > arr;
    vector <int> temp;
    int input;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            temp.push_back (input);
        }
        arr.push_back (temp);
    }
    flip (arr);
    print2dArr (arr);
    return 0;
}
>>>>>>> df5d40a (commit)
