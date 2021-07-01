/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
ll test, n, m, k, x, y, z;
ll a[lim], b[lim], c[lim];
bool have;
/*Function*/

void init(){
	x = 0;
	y = 0;
	z = 0;
	have = false;
	cin >> n >> m >> k;
	cinArr(a, n);
	cinArr(b, m);
	cinArr(c, k);
}
bool ok(){
	if(x<n && y<m && z<k)
		return true;
	return false;
}
void solve(){	
	while(ok()){
		ll sus = max(a[x], max(b[y], c[z]));
		while(x < n && a[x] < sus)	++x;
		if(x == n || a[x] > sus)	continue;
		while(y < m && b[y] < sus)	++y;
		if(y == m || b[y] > sus)	continue;
		while(z < k && c[z] < sus)	++z;
		if(z == k || c[z] > sus)	continue;
		have = true;
		cout << sus << ' ';
		++x;
		++y;
		++z;
	}
	if(!have)	cout << -1;
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

