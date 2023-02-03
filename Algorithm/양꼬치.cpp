using namespace std;

constexpr int price1 = 12000;
constexpr int price2 = 2000;

int solution(int n, int k) {
    return (price1 * n) + (price2 * (k - (n / 10)));
}