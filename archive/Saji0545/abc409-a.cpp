/*
ABC409
A - Conflict  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
100 点

問題文
N 個の商品があります。高橋君と青木君がどの商品を欲しがっているかを表す長さ
N の文字列
T,A が与えられます。
T,A の
i (1≤i≤N) 文字目をそれぞれ
T
i
​
 ,A
i
​
  とします。

高橋君は
T
i
​
  が o のとき
i 番目の商品を欲しがっており、
T
i
​
  が x のとき
i 番目の商品を欲しがっていません。 同様に、青木君は
A
i
​
  が o のとき
i 番目の商品を欲しがっており、
A
i
​
  が x のとき
i 番目の商品を欲しがっていません。

2 人ともが欲しがっている商品が存在するか判定してください。

制約
1≤N≤100
N は整数
T,A は o および x からなる長さ
N の文字列
入力
入力は以下の形式で標準入力から与えられる。

N
T
A
出力
2 人とも欲しがっている商品が存在するならば Yes を、存在しないならば No を出力せよ。
*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N; string T, A; bool F = false;
	cin >> N >> T >> A;
	for (int i = 0; i < N; i++)
		if ((T[i] == 'o') && (A[i] == 'o'))
			F = true;
	cout << (F ? "Yes" : "No") << '\n';
}
/*
提出情報
提出日時	2026-04-19 19:20:33
問題	A - Conflict
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	100
コード長	293 Byte
結果	AC
実行時間	2 ms
メモリ	3008 KiB
https://atcoder.jp/contests/abc409/submissions/75110789
*/
