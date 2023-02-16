#include <string>
#include <vector>
#include <map>

using namespace std;

bool judge(const string& word, const vector<string>& spells)
{
    map<string, int> m;

    for (auto spell : spells)
    {
        bool found = false;
        for (auto ch : word)
        {
            string temp = string{ ch };
            if (temp == spell)
            {
                m[temp]++;
                found = true;
                continue;
            }
        }

        if (!found)
            return false;
    }

    for (auto spell : spells)
    {
        if (m[spell] != 1)
            return false;
    }

    return true;
}

int solution(vector<string> spells, vector<string> dic) {

    bool exist = false;
    for (const string& word : dic)
    {
        if (judge(word, spells))
            return 1;
    }

    return 2;
}