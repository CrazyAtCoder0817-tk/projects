#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder; 
using mint = modint998244353;
using ll = long long;
using ull = unsigned long long;
using i128 = __int128_t;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<long long>>;

#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep3(i, m, n) for (ll i = (ll)(m); i < (ll)(n); i++)
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define endl '\n'

template <typename T, typename U> inline bool chmin(T& a, const U& b){return(a>b ? a=b, true:false);}
template <typename T, typename U> inline bool chmax(T& a, const U& b){return(a<b ? a=b, true:false);}

template <typename T> void read(T& x){cin>>x;}
template <typename T, typename U> void read(pair<T,U>& p){read(p.first);read(p.second);}
template <typename T> void read(vector<T>& v){for(auto& x:v) read(x);}
template <typename... Args> void read(Args&... args){(read(args), ...);}

int main() {
    cin.tie(nullptr); ios::sync_with_stdio(false);
    cout<"Hello, World!";
}
