#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		int temp = 0, carry = 0;
		while (a.size() < b.size())
		{
			a = "0" + a;
		}
		while (a.size() > b.size())
		{
			b = "0" + b;
		}
		for (int i = a.size() - 1; i >= 0; i--)
		{

			temp = a[i] - '0' + b[i] - '0' + carry;
			a[i] = temp % 10 + '0';
			if (temp / 10)
				carry = 1;
			else
				carry = 0;
		}
		if (carry)
			a = "1" + a;
		cout << a << endl;
	}
	return 0;
}