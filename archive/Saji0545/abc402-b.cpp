/*
ABC402
https://atcoder.jp/contests/abc402/tasks/abc402_b
*/
#include "bits/stdc++.h"
using namespace std;
using ll = signed long long;
using ull = unsigned long long ;
using ld = long double;
#define rep(i,N) for(int i = 0; i < N; i++)
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int QCount, Q, X; int Now1 = 0, Now2 = 0, XL[100] = { 0 };
	cin >> QCount;
	rep(i, QCount)
	{
		cin >> Q; Q--;
		if (!Q)
		{
			cin >> X;
			XL[Now1] = X;
			Now1++;
		}
		else
		{
			cout << XL[Now2] << '\n';
			Now2++;
		}
	}
	cout << '\n';
}
/*
提出情報
提出日時	2026-04-19 19:52:38
問題	B - Restaurant Queue
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	200
コード長	508 Byte
結果	AC
実行時間	1 ms
メモリ	2992 KiB
https://atcoder.jp/contests/abc402/submissions/75111315
*/
