using namespace std;

int solution(int angle) {
    int val1 = angle / 90;
    int val2 = angle % 90;

    if (val1 == 0) return 1;
    if (val1 == 1)
        return val2 ? 3 : 2;
    if (val1 == 2)
        return 4;

    return 0;
}