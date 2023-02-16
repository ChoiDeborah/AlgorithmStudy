#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;

    string buffer;
    const int len = my_str.length();

    for (int i = 0; i < len + 1; ++i)
    {
        if ((i % n == 0 && i != 0) || my_str[i] == '\0')
        {
            answer.push_back(buffer);
            buffer = "";
        }

        buffer += my_str[i];
    }

    return answer;
}