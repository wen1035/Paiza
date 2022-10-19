#include <iostream>
using namespace std;
int main(void) {
	int x, y, z, n, d, d1, d2, u, mus, w[100000], e[100000];
	cin >> x >> y >> z >> n;
	//輸入幾次
	for (int i = 0; i < n; i++)
	{
		cin >> d;
		if (d == 0)//平行Y切
		{
			cin >> d1;
			w[i] = d1;
			e[i] = 0;
		}
		else if (d == 1)//平行X切
		{
			cin >> d2;
			e[i] = d2;
			w[i] = 0;
		}
	}
	for (int k = 0; k < n - 1; k++)
	{
		for (int j = 0; j < n - k - 1; j++)
		{
			//平行X切
			if (e[j] < e[j + 1])
			{
				//布林，轉移
				mus = e[j + 1];
				e[j + 1] = e[j];
				e[j] = mus;
			}
			//平行Y切
			if (w[j] < w[j + 1])
			{
				//布林，轉移
				mus = w[j + 1];
				w[j + 1] = w[j];
				w[j] = mus;
			}
		}
	}
	d = x - w[0];
	u = y - e[0];

	//平行X切，找到最小值
	for (int r = 0; r < n - 1; r++)
	{
		if (e[r] - e[r + 1] < u && e[r] - e[r + 1] != 0)
		{
			u = e[r] - e[r + 1];
		}
	}
	if (e[n - 1] < u && e[n - 1] != 0)
	{
		u = e[n - 1];
	}

	//平行Y切，找到最小值
	for (int m = 0; m < n - 1; m++)
	{
		if (w[m] - w[m + 1] != 0 && w[m] - w[m + 1] < d)
		{
			d = w[m] - w[m + 1];
		}
	}
	if (w[n - 1] != 0 && w[n - 1] < d)
	{
		d = w[n - 1];
	}


	//最小值面積
	cout << d * u * z << endl;
}