/*
ABC400
B - Sum of Geometric Series  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
200 点

問題文
正整数
N,M が与えられます。

X=
i=0
∑
M
​
 N
i
  とします。
X≤10
9
  のときは
X の値を、
X>10
9
  のときは文字列 inf を出力してください。

制約
1≤N≤10
9

1≤M≤100
入力される値はすべて整数
入力
入力は以下の形式で標準入力から与えられる。

N
M
出力
問題文の指示に従って
X の値あるいは inf を出力せよ。
*/
#include "bits/stdc++.h"
using namespace std;
using ll = signed long long;
using ull = unsigned long long ;
using ld = long double;
#define rep(N) for(int i = 0; i < N; i++)
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ull N, M, X = 0, NN = 1;
	cin >> N >> M;
	for (int i = 0; i <= M; i++)
	{
		X += NN;
		NN *= N;
	}
	if (X > 1000000000)
		puts("inf");
	else
		cout << X << '\n';
}
/*
提出情報
提出日時	2026-04-19 19:33:40
問題	B - Sum of Geometric Series
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	200
コード長	418 Byte
結果	AC
実行時間	1 ms
メモリ	3012 KiB
*/
