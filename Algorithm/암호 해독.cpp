#include <string>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    const int len = cipher.length();
    for (int i = (code - 1); i < len; i += code)
        answer += *(cipher.c_str() + i);

    return answer;
}