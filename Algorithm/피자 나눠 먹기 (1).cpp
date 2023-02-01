#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count = 1;
    while (n > count * 7)
        ++count;

    return count;
}
