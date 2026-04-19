/*
ABC408
A - Timeout  /
実行時間制限: 2 sec / メモリ制限: 1024 MiB

配点 :
150 点

問題文
高橋村の長老はすぐに寝てしまいます。具体的には、最後に肩を叩かれてから
S+0.5 秒以上経過すると長老は寝てしまいます。

現在、長老は起きており、付き人がちょうど長老の肩を叩きました。

これから付き人はちょうど
N 回長老の肩を叩きます。
i 回目の肩叩きは現在から
T
i
​
  秒後に行われます。

長老が現在から
T
N
​
  秒後まで連続して起きているかを判定してください。

制約
1≤N≤100
1≤S≤100
1≤T
i
​
 ≤1000 (
1≤i≤N)
T
i
​
 <T
i+1
​
  (
1≤i≤N−1)
入力はすべて整数
入力
入力は以下の形式で標準入力から与えられる。

N
S
T
1
​

T
2
​

…
T
N
​

出力
長老が現在から
T
N
​
  秒後まで連続して起きているならば Yes を、そうでないならば No を出力せよ。


*/
#include "bits/stdc++.h"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, S, ST = 0; bool F = true;
	cin >> N >> S;
	N *= 2; S *= 2;
	for (int i = 0; i < N; i++)
	{
		int T;
		cin >> T;
		T *= 2;
		if ((ST + S + 1) < T)
		{
			F = false;
			break;
		}
		ST = T;
	}
	cout << (F ? "Yes" : "No") << '\n';
}
/*
提出情報
提出日時	2026-04-19 19:14:37
問題	A - Timeout
ユーザ	Saji0545
言語	C++23 (Clang 21.1.0)
得点	150
コード長	364 Byte
結果	AC
実行時間	3 ms
メモリ	3084 KiB
*/
