/*
ABC404
A - Not Found  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
100 点

問題文
英小文字からなる長さ
1 以上
25 以下の文字列
S が与えられます。
S に含まれない英小文字をひとつ出力してください。
但し、そのようなものが複数ある場合はどれを出力しても構いません。

制約
S は英小文字からなる長さ
1 以上
25 以下の文字列
入力
入力は以下の形式で標準入力から与えられる。

S
出力
S に含まれない英小文字をひとつ出力せよ。そのようなものが複数ある場合はどれを出力しても構わない。
*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string S; vector<bool> F(255, false);
	cin >> S;
	for (int i = 0; i < S.size(); i++)
	{
		F[S[i]] = true;
	}
	for (int i = 'a'; i <= 'z'; i++)
	{
		
		if (!F[i])
		{
			putchar(i);
			break;
		}
	}
	putchar('\n');
}
/*
提出情報
提出日時	2026-04-19 18:07:37
問題	A - Not Found
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	100
コード長	343 Byte
結果	AC
実行時間	3 ms
メモリ	2932 KiB
https://atcoder.jp/contests/abc404/submissions/75109392
*/
