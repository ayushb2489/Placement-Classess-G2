<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

void print2dArray (vector <vector<int> > arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
}

vector <vector <int> > transpose (int** arr, int m, int n)
{
    vector <vector <int> > retV;
    vector <int> temp;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            temp.push_back (arr[j][i]);
        retV.push_back (temp);
        temp.clear();
    }
    return retV;
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
    vector <vector<int > > trans = transpose (arr, m, n);
    print2dArray (trans);
    return 0;
}
=======
#include <iostream>
#include <vector>
using namespace std;

void print2dArray (vector <vector<int> > arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
            cout << arr[i][j] << "\t";
        cout << "\n";
    }
}

vector <vector <int> > transpose (int** arr, int m, int n)
{
    vector <vector <int> > retV;
    vector <int> temp;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            temp.push_back (arr[j][i]);
        retV.push_back (temp);
        temp.clear();
    }
    return retV;
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
    vector <vector<int > > trans = transpose (arr, m, n);
    print2dArray (trans);
    return 0;
}
>>>>>>> df5d40a (commit)
