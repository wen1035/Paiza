#include <iostream>
using namespace std;
int main(void) {
	int n1, n2, p, q;
	cin >> n2;
	int e[1000][1000];

	//��J��e[n2][n2]
	for (int c = 0; c < n2; c++)
	{
		for (int v = 0; v < n2; v++)
		{
			cin >> q;
			e[c][v] = q;

		}
	}
	cin >> n1;
	int w[1000][1000];
	//��J��w[n1][n1]
	for (int z = 0; z < n1; z++)
	{
		for (int x = 0; x < n1; x++)
		{
			cin >> p;
			w[z][x] = p;

		}
	}
	//�q�Ĥ@�ӹϧ�X�ĤG�ӹϪ��}�Y��l
	for (int i = 0; i <= n2 - n1; i++)
	{
		for (int j = 0; j <= n2 - n1; j++)
		{
			//���}�Y�@�˪�
			if (e[i][j] == w[0][0])
			{
				int sum = 0;
				//�@�ӭӤ��
				for (int k = 0; k < n1; k++)
				{
					for (int a = 0; a < n1; a++)
					{
						if (e[i + k][j + a] != w[k][a])
						{
							sum = 1;//������N��
							k = n1;
							break;
						}
					}
				}
				if (sum == 0)
				{
					cout << i << " " << j << endl;
				}
			}
		}
	}
}
