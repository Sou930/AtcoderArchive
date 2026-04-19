/*
ABC406
A - Not Acceptable  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
100 点

問題文
高橋君は
2025 年
5 月
17 日
A 時
B 分締切のレポートを、
2025 年
5 月
17 日
C 時
D 分に提出しました。
ここで、「
A 時
B 分」と「
C 時
D 分」は異なる時刻であることが保証されます。

高橋君が締切前にレポートを提出しているならば Yes を、そうでないならば No を出力してください。

制約
0≤A,C≤23
0≤B,D≤59
(A,B)

=(C,D)
A,B,C,D は整数
入力
入力は以下の形式で標準入力から与えられる。

A
B
C
D
出力
高橋君が締切前にレポートを提出しているならば Yes を、そうでないならば No を出力せよ。


*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	if (A < C)puts("No");
	else if (A == C)
		if (B < D)puts("No");
		else puts("Yes");
	else puts("Yes");
}
/*
提出情報
提出日時	2026-04-19 18:25:50
問題	A - Not Acceptable
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	100
コード長	266 Byte
結果	AC
実行時間	2 ms
メモリ	2976 KiB
*/
