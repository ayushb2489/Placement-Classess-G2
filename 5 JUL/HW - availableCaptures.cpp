<<<<<<< HEAD
class Solution {
public:
    
    int left (vector<vector<char>>& board, int ii, int jj)
    {
        for (int j = jj - 1; j >= 0; j--)
            if (board[ii][j] == 'p')
                return 1;
            else if (board[ii][j] == 'B')
                return 0;
        return 0;
    }
    int right (vector<vector<char>>& board, int ii, int jj)
    {
        for (int j = jj + 1; j < 8; j++)
            if (board[ii][j] == 'p')
                return 1;
            else if (board[ii][j] == 'B')
                return 0;
        return 0;
    }
    int top (vector<vector<char>>& board, int ii, int jj)
    {
        for (int i = ii - 1; i >= 0; i--)
            if (board[i][jj] == 'p')
                return 1;
            else if (board[i][jj] == 'B')
                return 0;
        return 0;
    }
    int down (vector<vector<char>>& board, int ii, int jj)
    {
        for (int i = ii + 1; i < 8; i++)
            if (board[i][jj] == 'p')
                return 1;
            else if (board[i][jj] == 'B')
                return 0;
        return 0;
    }
    
    int numRookCaptures(vector<vector<char>>& board) {
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
            {
                if (board[i][j] == 'R')
                {
                    return (left (board, i, j) + right (board, i, j) +
                           top (board, i, j) + down (board, i, j));
                }
            }
        return 0;
    }
=======
class Solution {
public:
    
    int left (vector<vector<char>>& board, int ii, int jj)
    {
        for (int j = jj - 1; j >= 0; j--)
            if (board[ii][j] == 'p')
                return 1;
            else if (board[ii][j] == 'B')
                return 0;
        return 0;
    }
    int right (vector<vector<char>>& board, int ii, int jj)
    {
        for (int j = jj + 1; j < 8; j++)
            if (board[ii][j] == 'p')
                return 1;
            else if (board[ii][j] == 'B')
                return 0;
        return 0;
    }
    int top (vector<vector<char>>& board, int ii, int jj)
    {
        for (int i = ii - 1; i >= 0; i--)
            if (board[i][jj] == 'p')
                return 1;
            else if (board[i][jj] == 'B')
                return 0;
        return 0;
    }
    int down (vector<vector<char>>& board, int ii, int jj)
    {
        for (int i = ii + 1; i < 8; i++)
            if (board[i][jj] == 'p')
                return 1;
            else if (board[i][jj] == 'B')
                return 0;
        return 0;
    }
    
    int numRookCaptures(vector<vector<char>>& board) {
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
            {
                if (board[i][j] == 'R')
                {
                    return (left (board, i, j) + right (board, i, j) +
                           top (board, i, j) + down (board, i, j));
                }
            }
        return 0;
    }
>>>>>>> df5d40a (commit)
};