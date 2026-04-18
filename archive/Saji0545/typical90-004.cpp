/*typical90-004*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long long H, W, A[2000][2000]= { {0} }, AW[2000] = { 0 }, AH[2000] = { 0 };
int main()
{
	cin >> H >> W;
	for(int i = 0;i < H;i++)for(int j = 0;j<W;j++)cin >> A[j][i];
	for(int i = 0;i < H;i++)for(int j = 0;j<W;j++)
	{
		AW[j] += A[j][i];
		AH[i] += A[j][i];
	}
	for(int i = 0;i < H;i++)
	{
		for(int j = 0;j<W;j++)
		{
			cout << (AW[j] + AH[i] - A[j][i]) << " ";
		}
		cout << "\n";
	}
}
