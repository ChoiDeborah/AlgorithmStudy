#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int isDigit(char ch)
{
    ch -= '0';
    if (ch >= 0 && ch <= 9)
        return ch;

    return -1;
}

vector<int> solution(string my_string) {
    vector<int> answer;

    for (char ch : my_string)
    {
        int digit = isDigit(ch);

        if (-1 != digit)
            answer.push_back(digit);
    }

    sort(answer.begin(), answer.end());

    return answer;
}