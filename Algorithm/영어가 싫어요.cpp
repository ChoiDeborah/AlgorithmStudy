#include <vector>
#include <string>

using namespace std;

vector<string> list{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

long long solution(string numbers) {
    long long answer = 0;

    while (numbers != "")
    {
        for (int i = 0; i < list.size(); ++i)
        {
            const string& target = list[i];
            if (numbers.find(target) == 0)
            {
                numbers = numbers.substr(target.length());
                answer = (answer * 10) + i;
                break;
            }
        }
    }

    return answer;
}