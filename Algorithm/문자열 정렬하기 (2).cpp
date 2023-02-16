#include <string>
#include <algorithm>

using namespace std;

char convert(char ch)
{
    return ('A' <= ch && 'Z' >= ch) ? ch += 32 : ch;
}

string solution(string my_string) {
    sort(my_string.begin(), my_string.end(),
        [](char& ch1, char& ch2) {
            ch1 = convert(ch1);
            ch2 = convert(ch2);
    return ch1 < ch2;
        }
    );

    return my_string;
}