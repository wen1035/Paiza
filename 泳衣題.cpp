#include <iostream>
using namespace std;
int main(void)
{
	int number, zxc = 0;
	int sum = 1;
	cin >> number;
	//計算位子
	for (int i = 1; i <= number; i++)
	{
		int j = i;
		while (j % 5 == 0)
		{
			j = j / 5;
			zxc += 1;

		}
	}
	//扣0
	for (int k = 1; k <= number; k++)
	{
		int a = k;

		//%10
		while (a % 5 == 0)
		{
			a = a / 5;
		}
		while (a % 2 == 0 && zxc > 0)
		{
			a = a / 2;
			zxc -= 1;
		}

		//邊乘邊扣
		sum = sum * a;
		sum = sum % 1000000000;//亂打的
	}
	cout << sum << endl;

}
