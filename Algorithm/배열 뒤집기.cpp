#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    const size_t size = num_list.size() - 1;
    for (size_t i = 0; i <= size; ++i)
        answer.push_back(num_list.at(size - i));
    return answer;
}