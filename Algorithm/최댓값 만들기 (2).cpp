#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -2147483647 - 1;

    const int size = numbers.size();
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i == j)
                continue;

            int val = numbers[i] * numbers[j];
            if (answer < val)
                answer = val;
        }
    }

    return answer;
}