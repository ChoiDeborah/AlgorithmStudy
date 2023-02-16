#include <cmath>

using namespace std;

int solution(int n) {
    const double val = sqrt(n);
    return abs(val - static_cast<int>(val) < 1e-12) ? 1 : 2;
}