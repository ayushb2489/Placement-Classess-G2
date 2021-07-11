<<<<<<< HEAD
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int counter = 0;
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
            for (int j = n - 1; j >= 0 && grid[i][j] < 0; j--)
                counter++;
        return counter;
    }
=======
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int counter = 0;
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
            for (int j = n - 1; j >= 0 && grid[i][j] < 0; j--)
                counter++;
        return counter;
    }
>>>>>>> df5d40a (commit)
};