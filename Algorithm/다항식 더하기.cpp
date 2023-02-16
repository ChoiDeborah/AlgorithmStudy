#include <string>
#include <vector>
#include <map>

using namespace std;

int convert(const string& str, string key)
{
    int result = 0;

    for (char ch : str)
        result = (result * 10) + (ch - '0');

    if (key != " " && result == 0)
        result = 1;

    return result;
}

string calulator(const vector<string>& list)
{
    string answer = "";

    map<string, int> m;

    int pos = 0;
    for (string str : list)
    {
        string key = " ";
        if ((pos = str.find('x')) != string::npos)
        {
            key = "x";
            str.erase(pos, pos + 1);
        }

        m[key] += convert(str, key);
    }

    int value1 = 0;
    if ((value1 = m["x"]) > 0)
        answer = (value1 == 1) ? "x" : to_string(value1) + "x";


    int value2 = 0;
    if ((value2 = m[" "]) > 0)
        answer += (value1 > 0) ? (" + " + to_string(value2)) : to_string(value2);

    return answer;
}

string solution(string polynomial) {
    vector<string> list;

    string buf;
    for (int i = 0; i < polynomial.length() + 1; ++i)
    {
        const char& ch = polynomial[i];
        if (ch == '+' || ch == '\0')
        {
            list.push_back(buf);
            buf = "";
            continue;
        }

        if (ch == ' ')
            continue;

        buf += ch;
    }

    return calulator(list);
}