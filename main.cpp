#include <thread>
#include <iostream>
#include <string>
using namespace std;

void printPrimeFactors(int n)
{
	string res_srt("Prime factor of ");
	res_srt += to_string(n) + ": ";

	while (n % 2 == 0)
	{
		res_srt += "2 ";
		n /= 2;
	}

	for (int i = 3; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			res_srt += to_string(i) + " ";
			n /= i;
		}
	}

	res_srt += to_string(n);

	cout << res_srt << endl;
}

int main()
{
	int a;

	cin >> a;

	cout << "hello " << a << endl;

	printPrimeFactors(a);

	return 0;
}