#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for (int val : array)
    {
        if (height < val)
            ++answer;
    }
    return answer;
}