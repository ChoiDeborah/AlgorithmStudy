#include <string>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (auto ch : rsp)
    {
        switch (ch)
        {
        case '0':
            answer += '5';
            break;
        case '2':
            answer += '0';
            break;
        case '5':
            answer += '2';
            break;
        default:
            return "";
        }
    }

    return answer;
}