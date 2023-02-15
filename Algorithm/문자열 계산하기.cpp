#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> list;
    string buffer;

    const int len = my_string.length();
    for (int i = 0; i < len + 1; ++i)
    {
        const char& ch = my_string[i];
        if (ch == ' ' || ch == '\0')
        {
            list.push_back(buffer);
            buffer = "";
            continue;
        }

        buffer += ch;
    }

    bool plus = true;
    for (string s : list)
    {
        if (s == "-")
            plus = false;
        else if (s == "+")
            plus = true;
        else
        {
            const int val = stoll(s);
            answer += plus ? val : (val * -1);
        }
    }

    return answer;
}