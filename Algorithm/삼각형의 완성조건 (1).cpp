#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    const int largest = *(max_element(sides.begin(), sides.end()));

    int sum = 0;
    for (int side : sides)
        sum += side;

    return largest < (sum - largest) ? 1 : 2;
}