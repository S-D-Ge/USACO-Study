#include <bits/stdc++.h> 
using namespace std;
#define pb push_back 
#define is insert
#define ll long long
#define V vector
#define MS multiset
#define PL pair<int, int>
#define F first
#define S second
#define PQ priority_queue
#define f0r(i, begin, end) for (int i = begin; i < end; i ++) 
#define For(i, end, begin) for (int i = end; i > begin; i --) 
#define all(x) x.begin(), x.end()
#define INF 1000000000000000000
#define inf 1000000000
#define MOD 1000000009
#define len(x) (int)x.size()
#define fileread(file) ifstream fin; fin.open((string)file + ".in"); ofstream fout; fout.open((string)file + ".out")
#define fastio ios_base::sync_with_stdio(0); cin.tie(nullptr)
template<typename T> istream& operator>>(istream& in, V<T>& a) {for(auto &x : a) in >> x; return in;};
template<typename T> ostream& operator<<(ostream& out, V<T>& a) {for(auto &x : a) out << x << ' '; return out;};

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template <class T>
using Tree =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll N;
Tree<PL> nums;

int main () {
    fastio;
    cin >> N;
    f0r (i, 0, N) {
        ll a; cin >> a;
        nums.is({i, a});
    }
    f0r (i, 0, N) {
        ll pos; cin >> pos;
        cout << (*nums.find_by_order(pos - 1)).S << " ";
        nums.erase(nums.find_by_order(pos - 1));
    }
}