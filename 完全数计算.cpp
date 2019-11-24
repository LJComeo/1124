#include <iostream>
using namespace std;

int AddNum(int n)
{
	int count = 1;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			count += i;
		}
	}
	return count;
}


int main1()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		for (int i = 4; i <= n; i++)
		{
			int tmp = AddNum(i);
			if (tmp == i)
			{
				count++;
			}
		}
		cout << count << endl;
	}


	return 0;
}