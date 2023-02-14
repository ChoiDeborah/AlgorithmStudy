#include <string>
#include <set>

using namespace std;

set<char>s{ 'a', 'e', 'i', 'o', 'u' };

string solution(string my_string) {
    string answer = "";

    for (auto ch : my_string)
    {
        if (s.end() != s.find(ch))
            continue;
        answer += ch;
    }

    return answer;
}