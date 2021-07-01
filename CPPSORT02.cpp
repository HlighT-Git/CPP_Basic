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
int test, n, k;
II a[lim];
/*Function*/

void init(){
	cin >> n >> k;
	Fu(i, 0, n, 1){
		cin >> a[i].fi;
		a[i].se = i;
	}
}
bool cmp(II x, II y){
	int X = abs(x.fi - k);
	int Y = abs(y.fi - k);
	if(X == Y) return x.se < y.se;
	return X < Y;
}
void solve(){
	sort(a, a+n, cmp);
	Fu(i, 0, n, 1)
		cout << a[i].fi << ' ';
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

