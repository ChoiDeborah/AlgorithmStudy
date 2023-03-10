using namespace std;

bool composite(int n)
{
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            ++count;

        if (count > 2)
            return true;
    }

    return false;
}

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (composite(i))
            ++answer;
    }

    return answer;
}