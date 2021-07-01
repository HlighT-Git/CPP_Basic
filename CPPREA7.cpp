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
#define cinArr(a, n)	for(int i=0; i<n; ++i){ll tmp; cin >> tmp; a[i] = tmp;}
#define coutArr(a, n)	for(int i=0; i<n; ++i)	cout << a[i];
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
int test, n;
string a[lim];

/*Function*/

void init(){
	cin >> n;
	Fu(i, 0, n, 1)	cin >> a[i];
}

bool cmp(string a, string b){
	return (a+b) > (b+a);
}
void solve(){
	sort(a, a+n, cmp);
	coutArr(a, n);
}

/*Main program*/
int main(){
	cin >> test;
	while(test--){
		init();
		solve();
		cout << endl;
	}
	IOS()
    return 0;
}

/*Source: From H.LighT*/

