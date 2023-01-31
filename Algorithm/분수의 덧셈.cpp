#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;

    int val = gcd(numer, denom);

    answer.push_back(numer / val);
    answer.push_back(denom / val);
    return answer;
}