#include <string>
#include <algorithm>
#include <set>

using namespace std;

string solution(string s) {
    string answer = "";

    multiset<char> set;

    for (char ch : s)
        set.insert(ch);

    for (char ch : set)
    {
        if (1 == set.count(ch))
            answer += ch;
    }

    sort(answer.begin(), answer.end());

    return answer;
}