/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false);
#define tie() cin.tie(NULL); cout.tie(NULL);
/*Compact*/
#define pb push_back
#define pob pop_back
#define fi first
#define se second
#define all(a)	a.begin(), a.end()
#define Fu(i,a,b,jump)	for(int i=a; i<b; i+=jump)
#define Fd(i,a,b,jump)	for(int i=a; i>b; i-=jump)
#define cinArr(a, n)	for(int i=0; i<n; ++i)  cin >> a[i];
#define coutArr(a, n)	for(int i=0; i<n; ++i)	cout << a[i] << ' ';
/*Constant*/
#define Pi atan(1)*4
#define lim 100005
#define im INT_MAX
#define in INT_MIN
/*Declare*/
using namespace std;
typedef long long ll;
typedef double db;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

/*Initialize*/
int test, n, k, x;
int a[lim];
vi l, r;

/*Function*/

void init(){
	l.clear();
	r.clear();
	cin >> n;
	cinArr(a, n);
	cin >> k >> x;
}

void solve(){
	int L = lower_bound(a, a+n, x) - a;
	int R = upper_bound(a, a+n, x) - a;
	if(a[L] == x)	--L;
	while((L >= 0 || R < n) && k > 0){
		if(L >= 0){
			l.pb(a[L--]);
			--k;
		}
		if(R < n){
			r.pb(a[R++]);
			--k;
		}
	}
	reverse(all(l));
	coutArr(l, l.size());
	coutArr(r, r.size());
}

/*Main program*/
int main(){
	IOS()
	cin >> test;
	while(test--){
		init();
		solve();
		cout << endl;
	}
    return 0;
}

/*Source: From H.LighT*/

