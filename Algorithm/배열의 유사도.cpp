#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;

    for (const auto& buf1 : s1)
    {
        for (const auto& buf2 : s2)
        {
            if (buf1 == buf2)
            {
                ++answer;
                break;
            }
        }
    }

    return answer;
}