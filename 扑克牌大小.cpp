#include <iostream>
#include <string>
using namespace std;

int CmpPoker(string s1, string s2)
{
	int n = s1.size();
	int m = s2.size();
	if (m == n)
	{
		if (s1[0] > s2[0])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	else if (s1[0] == 'j')
	{
		return 1;
	}
	else if (s2[0] == 'j')
	{
		return -1;
	}
	else if (m == 7 || n == 7)
	{
		if (m == 7)
		{
			return -1;
		}
		if (n == 7)
		{
			return 1;
		}
	}
	else if ((s1[1] == '0' && m == 1 ) || (s2[1] == '0' && n == 1))
	{
		if (s1[1] == '0')
		{
			if ( s2[0] == 'J' || s2[0] == 'Q' || s2[0] == 'K' || s2[0] == 'A' || s2[0] == '2')
			{
				return -1;
			}
			else
			{
				return 1;
			}
		}
		if (s2[1] == '0')
		{
			if ( s1[0] == 'J' || s1[0] == 'Q' || s1[0] == 'K' || s1[0] == 'A' || s1[0] == '2')
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int main2()
{
	string s;
	getline(cin, s);
	int left = s.find('-');
	string sl(s.begin(), s.begin() + left);
	string sr(s.begin() + left + 1, s.end());
	if (CmpPoker(sl, sr) == 1)
	{
		cout << sl << endl;
	}
	else if (CmpPoker(sl, sr) == -1)
	{
		cout << sr << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}


	return 0;
}