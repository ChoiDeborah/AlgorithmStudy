#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
	vector<int> answer;
	vector<int> primes;

	vector<bool> isPrime(n + 1, true);
	for (int i = 2; i <= n; i++)
	{
		isPrime[i] = true;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (isPrime[i] == false)
			continue;

		for (int j = 2 * i; j <= n; j += i)
			isPrime[j] = false;

	}

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
			primes.push_back(i);
	}

	while (n != 1)
	{
		for (int prime : primes)
		{
			if (0 == n % prime)
			{
				n /= prime;
				answer.push_back(prime);
				break;
			}
		}
	}

	answer.erase(unique(answer.begin(), answer.end()), answer.end());

	return answer;
}