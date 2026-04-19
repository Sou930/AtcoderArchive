/*
ABC402
A - CBC  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
100 点

問題文
英大文字と英小文字からなる文字列
S が与えられます。
S の英大文字のみを元の順序で連結して得られる文字列を出力してください。

制約
S は英大文字と英小文字からなる文字列である
S の長さは
1 以上
100 以下である
入力
入力は以下の形式で標準入力から与えられる。

S
出力
S の英大文字のみを元の順序で連結して得られる文字列を出力せよ。
*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); i++)
	{
		if (('A' <= S[i]) && (S[i] <= 'Z'))
		{
			cout << S[i];
		}
	}
	putchar('\n');
}
/*
提出情報
提出日時	2026-04-19 12:54:50
問題	A - CBC
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	100
コード長	271 Byte
結果	AC
実行時間	1 ms
メモリ	2800 KiB
https://atcoder.jp/contests/abc402/submissions/75102616
*/
