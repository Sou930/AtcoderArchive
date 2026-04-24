#include "bits/stdc++.h"
using namespace std;
using ll = long long; using db = double;
#define rep(i,S,N) for(int i = S;i < N;i++)
#define rep1(i,S,N) for(int i = S;i <= N;i++)
int main()
{
	ll n, k, s;
	cin >> n >> k;
	s = k;
	vector<ll> a(n + 1, 1);
	for (int i = k; i < n + 1; i++)
	{
		a[i] = s;
		s += a[i];
		s %= 1000000000;
		s -= a[i - k];
		s %= 1000000000;
		if (s < 0)s += 1000000000;
	}
	cout << a[n] << '\n';
}
