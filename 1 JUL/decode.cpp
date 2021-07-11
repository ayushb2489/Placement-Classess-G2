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

vector <int> decode (vector <int> encoded, int first)
{
    vector <int> res;
    res.push_back (first);
    for (int i = 0; i < encoded.size(); i++)
        res.push_back (res[i] ^ encoded[i]);
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector <int> encoded;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        encoded.push_back (temp);
    }
    vector <int> decoded;
    int first;
    cin >> first;
    decoded = decode (encoded, first);
    displayVector (decoded);
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

vector <int> decode (vector <int> encoded, int first)
{
    vector <int> res;
    res.push_back (first);
    for (int i = 0; i < encoded.size(); i++)
        res.push_back (res[i] ^ encoded[i]);
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector <int> encoded;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        encoded.push_back (temp);
    }
    vector <int> decoded;
    int first;
    cin >> first;
    decoded = decode (encoded, first);
    displayVector (decoded);
    return 0;
}
>>>>>>> df5d40a (commit)
