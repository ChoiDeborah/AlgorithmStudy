#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;

    for (int val : array)
    {
        while (val != 0)
        {
            if (val % 10 == 7)
                ++answer;

            val /= 10;
        }
    }

    return answer;
}