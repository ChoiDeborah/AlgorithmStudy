#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;

    vector<int> x(0, dots.size());
    vector<int> y(0, dots.size());

    for (const auto& dot : dots)
    {
        x.push_back(dot[0]);
        y.push_back(dot[1]);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    return abs(x.front() - x.back()) * abs(y.front() - y.back());
}