/*
ABC401
A - Status Code  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
100 点

問題文
100 以上
999 以下の整数
S が与えられます。

S が
200 以上
299 以下のとき Success 、そうでないとき Failure と出力してください。

制約
100≤S≤999
S は整数
入力
入力は以下の形式で標準入力から与えられる。

S
出力
答えを出力せよ。
*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned S;
	cin >> S;
	if ((200 <= S) && (S <= 299))
	{
		puts("Success");
	}
	else
	{
		puts("Failure");
	}
}
/*
提出日時	2026-04-19 12:38:59
問題	A - Status Code
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	100
コード長	233 Byte
結果 AC
実行時間	4 ms
メモリ	2984 KiB
https://atcoder.jp/contests/abc401/submissions/75102350
*/
