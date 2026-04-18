#include <bits/stdc++.h>
using namespace std;
namespace mac{
// 型エイリアス
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using vvi = vector<vi>;
using vvl = vector<vl>;


// 定数
const ll INF = (1LL << 60);
const int INF_INT = (1 << 30);

// 方向配列（上下左右・8方向）
int dx4[4] = {1, 0, -1, 0};
int dy4[4] = {0, 1, 0, -1};
int dx8[8] = {1,1,0,-1,-1,-1,0,1};
int dy8[8] = {0,1,1,1,0,-1,-1,-1};

// 便利マクロ
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i,n) for (int i = 1; i <= (int)(n); ++i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
// 範囲確認マクロ
#define deb(x) cerr << "[L" << __LINE__ << "] " << #x << " = " << (x) << '\n'
#define tr()  cerr << "[TRACE] L" << __LINE__ << '\n'



// 入出力高速化
void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}
}
using namespace mac;

int main() {
  int N;
  string S;
  cin >> N >> S;
  int c = 0;
  rep(i, N){
    char s = S[i];
    if (s == 'o' && c == 0) continue;
    else{
      c = 1;
      cout << S[i];
    }
  }
}
