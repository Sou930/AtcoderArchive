/*
ABC407
A - Approximation  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
150 点

問題文
正整数
A と正の奇数
B が与えられます。

実数
B
A
​
  との差が最小となる整数を出力してください。

ただし、制約のもとでそのような整数がただ一つ存在することが証明できます。

制約
1≤A≤407
1≤B≤407
B は奇数
入力はすべて整数
入力
入力は以下の形式で標準入力から与えられる。

A
B
出力
B
A
​
  との差が最小となる整数を出力せよ。
*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B;
	cin >> A >> B;
	int Min, Max;double F;
	Min = A / B;
	Max = Min + 1;
	F = (double)A / (double)B;
	if ((Max - F) < (F - Min))
	{
		cout << Max;
	}
	else
	{
		cout << Min;
	}
	putchar('\n');
}
/*
提出情報
提出日時	2026-04-19 18:51:35
問題	A - Approximation
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	150
コード長	328 Byte
結果	正解
実行時間	3 ms
メモリ	3044 KiB
https://atcoder.jp/contests/abc407/submissions/75110294
*/
