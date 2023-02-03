#include <string>
#include <vector>
#include <math.h>

using namespace std;

string solution(int age) {
    string answer;

    vector<char> characters;
    for (int i = 0; i < 10; ++i)
        characters.push_back(97 + i);

    int size = floor(log10(age) + 1);
    for (int i = size - 1; i >= 0; --i)
    {
        int pivot = (age / static_cast<int>(pow(10, i))) % 10;
        answer += characters[pivot];
    }

    return answer;
}