#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    map<int, int> m;
    int max = 0, answer = 0;

    for (int i : array)
        m[i]++;

    for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        const int& val = it->second;
        if (max < val)
        {
            max = val;
            answer = it->first;
        }
        else if (max == val)
        {
            answer = -1;
        }
    }

    return answer;
}