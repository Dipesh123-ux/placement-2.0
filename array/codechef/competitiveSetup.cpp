/*
                      █████████
  ███████          ███         ███
  █      █       ███             ███
   █      █    ██                   ██
    █     █   ██      ██      ██     ███
     █   █   █       ████    ████      ██
   █████████████                        █       
   █            █          █            █          
 ██             █    ██          ██     █      
██   ███████████      ██        ██     ██    
█               █       ████████      ██
██              ██                   ██
 █   ███████████ ██                ███
 ██          ██    ███         ████
  ████████████        █████████
 
© Dipesh Jaswani
*/
#include<bits/stdc++.h>
using namespace std;
 
// Using Policy based Data Structures
 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>     
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, 
    tree_order_statistics_node_update> ordered_set;
 
typedef tree<int, null_type,  less_equal<int>, rb_tree_tag, 
    tree_order_statistics_node_update> ordered_multiset;
 
#define find_ele(s,index) *s.find_by_order(index)
#define count_less(s,k) s.order_of_key(k)
 
// Customised Macros
 
#define ll long long
#define ull unsigned long long
#define inf INT_MAX
#define ninf INT_MIN
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define mod (ll)1000000007
#define MOD (ll)998244353
#define test(t) int t; cin >> t; while(t--)
#define f(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x; i >= y; i--)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define rfo(i, n) for (ll i = n-1; i >= 0; i--)
#define in(A,n) fo(i,n) cin>>A[i];
#define inm(m,r,c) fo(i,r) {vl row; fo(j,c){ ll temp; cin>>temp; row.pb(temp);} m.pb(row);}
#define trav(i, x) for (auto i : x)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(x) x.begin(), x.end()
#define every(arr,n) arr, arr+n
#define arr_size(arr) *(&arr + 1) - arr
#define out(x) cout << x << "\n"
#define op(x) cout << x << " "
#define nl cout << "\n"
#define ff first
#define ss second
#define ari(n) array<int,n>
#define arl(n) array<ll,n>
#define um unordered_map
#define umm unordered_multimap
#define us unordered_set
#define ums unordered_multiset
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define pf push_front
#define ef emplace_front
#define pof pop_front
#define mp make_pair
#define outs(a) for(auto u:a) cout<<u<<" "; cout<<endl;
#define outp(a) for(auto u:a) cout<<u.ff<<" "<<u.ss<<endl;
#define outm(a) for(auto i:a) {for(auto j:i) cout<<j<<" "; cout<<endl;}
#define frac(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield)
#define nfs ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
// Customised STL Containers and Data Types
 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef set<int> si;
typedef set<ll> sl;
typedef multiset<int> msi;
typedef multiset<ll> msl;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef multimap<int,int> mmii;
typedef multimap<ll,ll> mmll;
typedef list<int> dli; 
typedef list<ll> dll; 
typedef forward_list<int> sli; 
typedef forward_list<ll> sll; 
typedef priority_queue<ll> max_queue;
typedef priority_queue<ll, vector<ll>, greater<>> min_queue; 
 
// Customised STL Algorithms
 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define rev_sort(x) sort(all(x),greater<>())
#define is_sort(v) is_sorted(all(v))
#define ls(v,x) find(all(v),x)
#define bs(v,x) binary_search(all(v),x)
#define ub(v,x) upper_bound(all(v),x)
#define lb(v,x) lower_bound(all(v),x)
#define mne(x) min_element(all(x))
#define mxe(x) max_element(all(x))
#define sum(v) accumulate(all(v),0LL)
#define pre_sum(a,b) partial_sum(all(a),b.begin())
#define bit_count(x) __builtin_popcountll(x)
#define to_upper(a) transform(all(a), a.begin(), ::toupper)
#define to_lower(a) transform(all(a), a.begin(), ::tolower)
#define count_of(v,x) count(all(v),x)
#define rev(v) reverse(all(v))
#define rotate_l(v,s) rotate(v.begin(), v.begin() + s, v.end())
#define rotate_r(v,s) rotate(v.rbegin(), v.rbegin() + s, v.rend())
#define merge_to(v1,v2,v3) merge(all(v1), all(v2), v3.begin())
#define next_per(s) next_permutation(all(s))
#define prev_per(s) prev_permutation(all(s))
#define is_per(a,b) is_permutaion(all(a),all(b))
#define inc(v,k) transform(all(v), v.begin(), [](ll x){return x+k;})
#define dec(v,k) transform(all(v), v.begin(), [](ll x){return x-k;})
#define distinct(v) if(!is_sorted(all(v))) sort(all(v)); auto last=unique(all(v)); v.erase(last, v.end())
#define bin_str(n) bitset<32>(n).to_string()
#define fill_up(v,n) fill(all(v),n)
#define fill_consec(v,n) iota(all(v),n)
#define max_heap(v) make_heap(all(v))
#define min_heap(v) make_heap(all(v), greater<>())
#define push_maxheap(v) push_heap(all(v))
#define push_minheap(v) push_heap(all(v), greater<>())
#define pop_maxheap(v) pop_heap(all(v))
#define pop_minheap(v) pop_heap(all(v), greater<>())
#define sort_maxheap(v) sort_heap(all(v))
#define sort_minheap(v) sort_heap(all(v), greater<>())
#define is_maxheap(v) is_heap(all(v))
#define is_minheap(v) is_heap(all(v), greater<>())
#define is_maxheap_until(v) is_heap_until(all(v))
#define is_minheap_until(v) is_heap_until(all(v), greater<>())
 
// Customised Functions
 
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
ll modexp(ll a, ll b, ll m) {ll result = 1LL; while(b>0) {if(b & 1) {result = (result  * 1LL * a) % m;} a = (a * 1LL * a) % m; b >>= 1;} return result;}
 
// Solution
 
void solve(){
    ll n;
    cin>>n;
    vl a(n);
    in(a,n);
    string ans="1";
    int f=0,j=0;
    f(i,1,n-1){
        if(f==0){
            if(a[i]>=a[j]){
                ans+='1';
                j=i;
            }
            else{
                if(a[i]<=a[0]){
                    ans+='1';
                    j=i;
                    f=1;
                }
                else ans+='0';
            }
        }
        else{
            if(a[i]<=a[0] and a[i]>=a[j]){
                ans+='1';
                j=i;
            }
            else ans+='0';
        }
    }
    out(ans);
}
 
int main(){
    nfs;
    test(t)
        solve();
    return 0;
}