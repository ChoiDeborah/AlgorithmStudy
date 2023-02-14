#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    const int count = num_list.size() / n;

    vector<vector<int>> answer(count, vector<int>());

    for (int i = 0; i < count; ++i)
        for (int j = 0; j < n; ++j)
            answer.at(i).push_back(num_list.at((n * i) + j));


    return answer;
}