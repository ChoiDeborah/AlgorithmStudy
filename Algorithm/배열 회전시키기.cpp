#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    size_t size = numbers.size();

    if (direction == "right")
    {
        answer.push_back(numbers[size - 1]);

        for (auto iter = numbers.begin(); iter != numbers.end() - 1; ++iter)
        {
            answer.push_back(*iter);
        }
    }
    else
    {
        for (auto iter = numbers.begin() + 1; iter != numbers.end(); ++iter)
        {
            answer.push_back(*iter);
        }
        answer.push_back(numbers[0]);
    }

    return answer;
}