#include <vector>

using namespace std;

struct Vec2
{
    int x = 0;
    int y = 0;
};

vector<Vec2> dir{
    Vec2{0, 1}, // UP
    Vec2{0, -1}, // DOWN
    Vec2{-1, 0}, // LEFT
    Vec2{1, 0}, // RIGHT
    Vec2{-1, 1}, // LEFT-UP
    Vec2{1, 1}, // RIGHT-UP
    Vec2{-1, -1}, // LEFT-DOWN
    Vec2{1, -1}, // RIGHT-DOWN
};

int solution(vector<vector<int>> board) {
    int answer = 0;

    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board[0].size(); ++j)
        {
            if (board[i][j] == 1)
            {
                for (int index = 0; index < dir.size(); ++index)
                {
                    Vec2 pos = dir.at(index);
                    pos.x += i;
                    pos.y += j;

                    if (pos.x < board.size() && pos.x >= 0 && pos.y < board.size() && pos.y >= 0 && board[pos.x][pos.y] != 1)
                    {
                        board[pos.x][pos.y] = 2;
                    }

                }
            }
        }
    }

    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board[0].size(); ++j)
        {
            if (board[i][j] == 0)
                ++answer;
        }
    }

    return answer;
}