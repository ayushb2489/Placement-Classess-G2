<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

bool sameDiagonal (vector <vector <int> > arr)
{
    int m = arr.size();
    int n = arr[0].size();
    if (m == 1 || n == 1)
        return true;
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][j] != arr[i - 1][j - 1])
                return false;
        }
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int input;
    vector <int> temp;
    vector <vector <int> > arr;
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            temp.push_back (input);
        }
        arr.push_back (temp);
        temp.clear();
    }
    if (sameDiagonal (arr))
        cout << "True";
    else
        cout << "False";
    return 0;
}
=======
#include <iostream>
#include <vector>
using namespace std;

bool sameDiagonal (vector <vector <int> > arr)
{
    int m = arr.size();
    int n = arr[0].size();
    if (m == 1 || n == 1)
        return true;
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][j] != arr[i - 1][j - 1])
                return false;
        }
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int input;
    vector <int> temp;
    vector <vector <int> > arr;
    for (int i = 0; i < m; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            temp.push_back (input);
        }
        arr.push_back (temp);
        temp.clear();
    }
    if (sameDiagonal (arr))
        cout << "True";
    else
        cout << "False";
    return 0;
}
>>>>>>> df5d40a (commit)
