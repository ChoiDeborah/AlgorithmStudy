#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int max = 0, second = 0;

    for (int num : numbers)
    {
        if (max < num)
        {
            second = max;
            max = num;
        }
        else if (second < num && second < max)
            second = num;
    }

    return max * second;
}