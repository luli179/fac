#include<iostream>
using namespace std;
//阶乘程序
int main()
{
	int f = 1, i = 2;
	int n;
	cin >> n;
	while (i <= n)
	{
		f *= i;
		i += 1;
	}
	cout << f << endl;
	return 0;
}