#include <string>
#include <vector>
#include <math.h>

using namespace std;

int convert(const string& str)
{
    int result = 0;
    const int len = str.length();

    bool flag = false;
    for (int i = 0; i < len; ++i)
    {
        char ch = *(str.c_str() + i);

        if (i == 0 && ch == '-')
        {
            flag = true;
            continue;
        }

        result += (ch - '0') * pow(10, len - (i + 1));
    }

    if (flag)
        result *= -1;

    return result;
}

int solution(string s) {
    vector<string> str;
    string temp;

    const int len = s.length();
    for (int i = 0; i <= len; ++i)
    {
        char ch = *(s.c_str() + i);

        if (ch == ' ' || ch == '\0')
        {
            str.push_back(temp);
            temp = "";
            continue;
        }

        temp += ch;
    }

    int result = 0, cache = 0;
    for (const string& buf : str)
    {
        if (buf == "Z")
        {
            result -= cache;
            continue;
        }

        cache = convert(buf);
        result += cache;
    }

    return result;
}