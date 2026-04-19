/*
ABC405
A - Is it rated?  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
100 点

問題文
現在 AtCoder で開催されている AtCoder Regular Contest (ARC) には、Div.
1 と Div.
2 の
2 種類が存在します。 ARC Div.
1 では レーティング が
1600 以上
2999 以下の人が、ARC Div.
2 ではレーティングが
1200 以上
2399 以下の人がそれぞれ Rated 対象 となります。

正整数
R,X が与えられます。

レーティングが
R の人は ARC Div.
X において Rated 対象ですか？

制約
1≤R≤4229
1≤X≤2
入力は全て整数
入力
入力は以下の形式で標準入力から与えられる。

R
X
出力
レーティングが
R の人が ARC Div.
X において Rated 対象ならば Yes を、そうでないならば No を出力せよ。
*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int R, X;
	cin >> R >> X;
	X--;
	((X && ((1200 <= R) && (R <= 2399))) || (!X && ((1600 <= R) && (R <= 2999)))) ?
		puts("Yes") :
		puts("No");
}
/*
提出情報
提出日時	2026-04-19 18:15:10
問題	A - Is it rated?
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	100
コード長	256 Byte
結果	AC
実行時間	3 ms
メモリ	2976 KiB
https://atcoder.jp/contests/abc405/submissions/75109594
*/
