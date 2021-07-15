#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare (pair <int, int> a, pair <int, int> b)
{
    return (a.second - a.first) < (b.second - b.first);
}

int main()
{
    int n, m, left, right;
    cin >> n >> m;
    vector <pair <int, int> > section;
    for (int i = 0; i < m; i++)
    {
        cin >> left >> right;
        section.push_back (make_pair (left, right));
    }

    sort (section.begin(), section.end(), compare);

    int arr[n + 1] = {0};
    arr[0] = INT_MAX;
    for (int i = 0; i < m; i++)
        for (int j = section[i].first; j <= section[i].second; j++)
            arr[j]++;


    for (int i = 0; i < m; i++)
        if (count (arr + section[i].first, arr + section[i].second + 1, 1) == 0)
            for (int j = section[i].first; j <= section[i].second; j++)
                arr[j]--;

    int sum = 0;
    bool flag = true;
    for (int i = 1; i <= n && flag; i++)
    {
        if (arr[i] == 0)
            flag = false;
        else
            sum += arr[i];
    }
    if (flag)
        cout << sum;
    else 
        cout << -1;
    return 0;
}
