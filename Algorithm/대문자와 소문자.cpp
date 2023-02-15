#include <string>

using namespace std;

char convert(char ch)
{
    return ('a' <= ch && 'z' >= ch) ? ch -= 32 : ch += 32;
}

string solution(string my_string) {
    string answer = "";
    for (const char& ch : my_string)
        answer += convert(ch);

    return answer;
}