#include <math.h>

using namespace std;

int solution(int order) {
    int answer = 0;
    while (1)
    {
        int val = pow(10, floor(log10(order)));
        if ((order / val) % 3 == 0)
            ++answer;

        if ((order %= val) == 0)
            break;
    }
    return answer;
}