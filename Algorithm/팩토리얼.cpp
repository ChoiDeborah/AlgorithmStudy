using namespace std;

int factorial(int val)
{
    if (val == 0 || val == 1)
        return 1;

    return val * factorial(val - 1);
}

int solution(int n) {
    int index = 0;
    while (1)
    {
        if (n < factorial(index))
            return index - 1;

        ++index;
    }
}