#include <string>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    const int len = my_string.length();
    for (int i = 0; i < len; ++i)
        answer += string(n, my_string.c_str()[i]);

    return answer;
}