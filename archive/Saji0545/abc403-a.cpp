/*
ABC403
A - Odd Position Sum  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
100 点

問題文
長さ
N の正整数列
A=(A
1
​
 ,A
2
​
 ,…,A
N
​
 ) が与えられます。

A の奇数番目の要素の総和を求めてください。すなわち、
N 以下の最大の奇数を
m としたとき
A
1
​
 +A
3
​
 +A
5
​
 +…+A
m
​
  を求めてください。

制約
1≤N≤100
1≤A
i
​
 ≤100
入力は全て整数
入力
入力は以下の形式で標準入力から与えられる。

N
A
1
​

A
2
​

…
A
N
​

出力
答えを出力せよ。
*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, Sum = 0;
	cin >> N; for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		if (!(i % 2))
			Sum += A;
	}
	cout << Sum;
	putchar('\n');
}
/*
提出情報
提出日時	2026-04-19 13:03:26
問題	A - Odd Position Sum
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	100
コード長	1155 Byte
結果	AC
実行時間	1 ms
メモリ	3000 KiB
https://atcoder.jp/contests/abc403/submissions/75102767
*/
