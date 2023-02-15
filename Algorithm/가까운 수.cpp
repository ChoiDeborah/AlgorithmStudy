#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<int> array, int n) {
    map<int, int> m;
    for (int val : array)
    {
        int key = abs(n - val);
        const auto& it = m.find(key);
        if (it != m.end())
        {
            if (val >= it->second)
                val = it->second;
        }
        m[key] = val;
    }

    return m.begin()->second;
}