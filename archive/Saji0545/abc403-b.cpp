/*
ABC403
https://atcoder.jp/contests/abc403/tasks/abc403_b
*/
#include "bits/stdc++.h"
using namespace std;
using ll = signed long long;
using ull = unsigned long long ;
using ld = long double;
#define rep(i,N) for(int i = 0; i < N; i++)
#define rep1(i,N) for(int i = 0; i <= N; i++)
int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	string T, U; 
	cin >> T >> U;
	rep1(i, T.size() - U.size())
	{
		bool OK = true;
		rep(j, U.size())
		{
			if ((T[i + j] != U[j]) && (T[i + j] != '?'))
			{
				OK = false;
			}
		}
		if (OK)
		{
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
}
/*
提出日時	2026-04-20 05:16:26
問題	B - Four Hidden
ユーザ	Saji0545
言語	C++23 (GCC 15.2.0)
得点	250
コード長	579 Byte
結果	AC
実行時間	1 ms
メモリ	3708 KiB
*/
