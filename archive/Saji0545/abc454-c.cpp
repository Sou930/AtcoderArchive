#include "bits/stdc++.h"
using namespace std;
using ll = signed long long;
using ull = unsigned long long;
using ld = long double;
#define rep(i,N) for(int i = 0; i < N; i++)
#define rep1(i,N) for(int i = 0; i <= N; i++)
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll N, M, Output = 0ll;
	cin >> N >> M;
	vector<bool> F(N, false); vector<vector<ll>> G(N);
	stack<ll> S;
	rep(i, M)
	{
		ll A, B;
		cin >> A >> B;
		A--; B--;
		G[A].push_back(B);
	}
	S.push(0);
	while (!S.empty())
	{
		ll ST = S.top();
		S.pop();

		if (F[ST])continue;
		F[ST] = true;
		Output++;

		for (ll i = 0; i < G[ST].size(); i++)
			if (!F[G[ST][i]])
			{
				S.push(G[ST][i]);
			}
	}
	cout << Output << '\n';
}
