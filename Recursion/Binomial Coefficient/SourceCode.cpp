#include <iostream> 
using namespace std;

int binomial(int, int);
void backwards(int);
bool prime(int);

int main()
{
	int n, k; bool sol;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter k: ";
	cin >> k;
	cout << "The binomial coefficient is: " << binomial(n, k) << endl;
	if (n < 2)
	{
		cout << "The number is composite" << endl;
	}
	else
	{
		sol = prime(n);
		if (sol == true)
		{
			cout << "The number is prime" << endl;
		}
		else
		{
			cout << "The number is composite" << endl;
		}
	}
	backwards(n);
	return 0;
}

int binomial(int n, int k)
{
	int res = 1;
	cout << n << endl;
	cout << k << endl;
	if (k > n)
	{
		cout << "k should be less than or equal to n" << endl;
		return 0;
	}
	for (int i = 0; i < k; i++)
	{
		res *= (n - i);
		res /= (i + 1);
	}
	return res;
}

bool prime(int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void backwards(int n)
{
	if (n == 0)
	{
		return;
	}
	cout << n << " ";
	backwards(n - 1);
}