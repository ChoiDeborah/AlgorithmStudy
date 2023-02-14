#include <string>

using namespace std;

int isDigit(char ch)
{
    ch -= '0';
    if (ch >= 0 && ch <= 9)
        return ch;

    return -1;
}

int solution(string my_string) {
    int sum = 0;
    for (char ch : my_string)
    {
        int result = isDigit(ch);
        if (-1 == result)
            continue;

        sum += result;
    }

    return sum;
}