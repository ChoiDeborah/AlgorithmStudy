#include <string>

using namespace std;

int solution(string my_string) {
    int answer = 0;

    int num = 0;
    for (int i = 0; i < my_string.length() + 1; ++i)
    {
        const char& ch = my_string[i];
        if ('0' > ch || '9' < ch || ch == '\0')
        {
            answer += num;
            num = 0;
            continue;
        }

        num = (num * 10) + (ch - '0');
    }

    return answer;
}