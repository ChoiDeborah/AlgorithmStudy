#include <vector>
#include <set>

using namespace std;

int solution(vector<int> array, int n) {
    multiset<int> s;
    for (int val : array)
        s.insert(val);

    return s.count(n);
}