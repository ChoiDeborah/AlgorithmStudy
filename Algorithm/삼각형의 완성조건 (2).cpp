#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;

    int largest = 0, another = 0;

    if (sides[0] >= sides[1])
    {
        largest = sides[0];
        another = sides[1];
    }
    else
    {
        another = sides[0];
        largest = sides[1];
    }

    for (int i = (largest - another + 1); i <= largest; ++i)
        ++answer;

    for (int i = largest + 1; i < (largest + another); ++i)
        ++answer;

    return answer;
}