#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer{ 0, 0 };

    for (int num : num_list)
        answer[num % 2]++;

    return answer;
}