#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    float percent = 0.f;
    if (price >= 100000)
        percent = 0.05f;
    if (price >= 300000)
        percent = 0.1f;
    if (price >= 500000)
        percent = 0.2f;

    return price - (price * percent);
}