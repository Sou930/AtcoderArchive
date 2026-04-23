#include "bits/stdc++.h"
using namespace std;
using ll = long long; using db = double;
#define rep(i,S,N) for(int i = S;i < N;i++)
#define rep1(i,S,N) for(int i = S;i <= N;i++)
ll isort(ll n)
{
	ll ok = 0, ng = (ll)2e9 + 5;
	while (ng - ok > 1)
	{
		ll mid = (ok + ng) / 2;
		if (mid <= n / mid)ok = mid;
		else ng = mid;
	}
	return ok;
}

int main()
{
	ll N;
	cin >> N;
	cout << isort(N / 2) + isort(N / 4) << '\n';
}
