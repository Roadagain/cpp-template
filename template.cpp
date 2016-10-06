#include <bits/stdc++.h>
using namespace std;

// template {{{
/* vim: set foldmethod=marker: */


//  /#######                            /##                               /##
// | ##__  ##                          | ##                              |__/
// | ##  \ ##  /######   /######   /#######  /######   /######   /######  /## /#######
// | #######/ /##__  ## |____  ## /##__  ## |____  ## /##__  ## |____  ##| ##| ##__  ##
// | ##__  ##| ##  \ ##  /#######| ##  | ##  /#######| ##  \ ##  /#######| ##| ##  \ ##
// | ##  \ ##| ##  | ## /##__  ##| ##  | ## /##__  ##| ##  | ## /##__  ##| ##| ##  | ##
// | ##  | ##|  ######/|  #######|  #######|  #######|  #######|  #######| ##| ##  | ##
// |__/  |__/ \______/  \_______/ \_______/ \_______/ \____  ## \_______/|__/|__/  |__/
//                                                    /##  \ ##
//                                                   |  ######/
//                                                    \______/

// constant
const int INF = (int)1e9;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
const double EPS = 1e-14;

// typedef
using ll   = long long;
using ull  = unsigned long long;
using vi   = vector<int>;
using vl   = vector<ll>;
using vd   = vector<double>;
using pii  = pair<int, int>;
using pdd  = pair<double, double>;
using vec2 = complex<double>;

// repetition
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define RFOR(i, a, b) for (int i = (int)(b) - 1; i >= (int)(a); i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)
#define REPit(i, obj) for (auto i = (obj).begin(); i != (obj).end(); i++)
#define RREPit(i, obj) for (auto i = (obj).rbegin(); i != (obj).rend(); i++)

// short
#define pb emplace_back
#define mp make_pair
#define fst first
#define sec second

// input
template <class T = int> inline T in(){ T x; cin >> x; return x; }
template <class T = int> inline vector<T> in(int n){ vector<T> v(n); REP(i, n) v[i] = in<T>(); return v; }
template <class T = int> inline void in(T* x, int n){ REP(i, n) x[i] = in<T>(); }
#define inl in<ll>
#define ind in<double>

// container util
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()
#define sz(obj) obj.size()
#define sza(ary) (sizeof(ary) / sizeof(*ary))
#define SORT(obj) sort(all(obj))
#define exist(obj, key) ((obj).find(key) != (obj).end())
#define cleary(ary) memset((ary), 0, sizeof(ary))

// print util
#define print(x) cout << (x) << endl
#define printd(x, d) cout << fixed << setprecision(d) << (x) << endl
template <class T> inline void printv(vector<T>& v){ int n = sz(v); REP(i, n) cout << v[i] << "\n "[i < n - 1]; }
template <class T> inline void printv(vector<T>& v, int n){ REP(i, n) cout << v[i] << "\n "[i < n - 1]; }
template <class T> inline void printa(T* ary, int n){ REP(i, n) cout << ary[i] << "\n "[i < n - 1]; }
#define dump(x) cerr << #x << ": " << (x) << endl
#define debug(x) cerr << #x << ": " << (x) << " (" << __LINE__ << ")" << endl

//template }}}

signed main()
{

    return 0;
}
