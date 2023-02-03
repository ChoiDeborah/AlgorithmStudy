#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> temp(emergency.begin(), emergency.end());
    sort(temp.begin(), temp.end(), greater<int>());

    vector<int> answer;

    for (int i : emergency)
    {
        int index = 0;
        for (int j : temp)
        {
            index++;
            if (i == j)
            {
                answer.push_back(index);
                break;
            }
        }
    }

    return answer;
}