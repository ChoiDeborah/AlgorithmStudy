#include <string>
#include <vector>

using namespace std;

int collect(vector<string> list)
{
    int result = 0;

    bool plus = true;
    for (const auto& s : list)
    {
        if (s == "-")
            plus = false;
        else if (s == "+")
            plus = true;
        else if (s == "=")
            return result;
        else
        {
            const int val = stoi(s);
            result += plus ? val : (val * -1);
        }
    }

    return result;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (const string& str : quiz)
    {
        vector<string> list;
        string buffer = "";
        bool equal = false;
        for (int i = 0; i < str.length() + 1; ++i)
        {
            const char& ch = str[i];
            if (ch == ' ' || ch == '\0')
            {
                list.push_back(buffer);
                buffer = "";
                continue;
            }

            buffer += ch;
        }

        answer.push_back(collect(list) == stoi(list.back()) ? "O" : "X");
    }
    return answer;
}