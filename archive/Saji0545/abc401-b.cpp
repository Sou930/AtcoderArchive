/*
ABC401
B - Unauthorized  /
https://atcoder.jp/contests/abc401/tasks/abc401_b
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
	int N, Error = 0; string S; bool login = false;
	cin >> N;
	rep(i,N)
	{
		cin >> S;
		if (S == "login")login = true;
		else if (S == "logout")login = false;
		else if (S == "private" && !login)Error++;
	}
	cout << Error << '\n';
}
/*
提出情報
提出日時	2026-04-19 19:42:11
問題	B - Unauthorized
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	200
コード長	486 Byte
結果	AC
実行時間	1 ms
メモリ	3004 KiB
https://atcoder.jp/contests/abc401/submissions/75111122
*/
