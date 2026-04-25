#include "bits/stdc++.h"
namespace AtCoder_by_Saji0545 {
	using namespace std;
	using ll = long long;
	using ull = unsigned long long;
	using ld = long double;
	using dl = double;
	using fl = float;

	using i8 = int8_t;
	using u8 = uint8_t;
	using fi8 = int_fast8_t;
	using fu8 = uint_fast8_t;

	using i16 = int16_t;
	using u16 = uint16_t;
	using fi16 = int_fast16_t;
	using fu16 = uint_fast16_t;
	
	using i32 = int32_t;
	using u32 = uint32_t;
	using fi32 = int_fast32_t;
	using fu32 = uint_fast32_t;
	
	using i64 = int64_t;
	using u64 = uint64_t;
	using fi64 = int_fast64_t;
	using fu64 = uint_fast64_t;
}
#define rep(i,N) for(long long i = 0; i < N; i++)
#define rep1(i,N) for(long long i = 0; i <= N; i++)
using namespace AtCoder_by_Saji0545;
static const struct INIT {
	INIT()
	{
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
	}
}INITMYPROGRAM;

int A, B, C;

void solve()
{
	cout << ((A != B) && (B == C) ? "Yes" : "No") << '\n';
}
int main()
{
	cin >> A >> B >> C;
	
	solve();
}
