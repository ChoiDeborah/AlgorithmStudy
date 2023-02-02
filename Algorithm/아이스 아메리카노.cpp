#include <vector>

using namespace std;

constexpr int price = 5500;

vector<int> solution(int money) {
    vector<int> answer;

    answer.push_back(money / price);
    answer.push_back(money % price);

    return answer;
}