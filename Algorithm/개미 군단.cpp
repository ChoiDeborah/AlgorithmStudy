#include <string>
#include <vector>

using namespace std;

vector<int> MercenaryPower = { 5, 3, 1 };

int solution(int hp) {
    int answer = 0;

    for (int power : MercenaryPower)
    {
        if (hp == 0)
            break;

        answer += hp / power;
        hp = hp - (power * (hp / power));

    }

    return answer;
}