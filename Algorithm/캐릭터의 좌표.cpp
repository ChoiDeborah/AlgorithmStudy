#include <string>
#include <vector>
#include <map>

using namespace std;

enum dir
{
    UP,
    DOWN,
    RIGHT,
    LEFT
};

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer{ 0,0 };

    int& x = answer[0];
    int& y = answer[1];

    const int& sizeX = board[0];
    const int& sizeY = board[1];

    map<string, int> m;
    m["up"] = dir::UP;
    m["down"] = dir::DOWN;
    m["right"] = dir::RIGHT;
    m["left"] = dir::LEFT;

    for (const string& input : keyinput)
    {
        int posX = 0, posY = 0;
        switch (m[input])
        {
        case dir::UP:
            posX = x;
            posY = y + 1;
            break;
        case dir::DOWN:
            posX = x;
            posY = y - 1;
            break;
        case dir::RIGHT:
            posX = x + 1;
            posY = y;
            break;
        case dir::LEFT:
            posX = x - 1;
            posY = y;
            break;
        }

        if ((sizeX / 2) < abs(posX) || (sizeY / 2) < abs(posY))
            continue;

        x = posX;
        y = posY;
    }

    return answer;
}