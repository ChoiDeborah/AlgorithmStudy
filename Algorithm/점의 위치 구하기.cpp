#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    dot[0] > 0 ? (dot[1] > 0 ? answer = 1 : answer = 4) : (dot[1] > 0 ? answer = 2 : answer = 3);
    return answer;
}