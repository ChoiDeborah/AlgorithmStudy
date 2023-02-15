#include <string>
#include <map>

using namespace std;

string solution(string my_string) {
    string answer = "";
    map<char, int> m;
    for (const char& ch : my_string)
    {
        m[ch]++;
        if (m[ch] == 1)
            answer += ch;
    }
    return answer;
}