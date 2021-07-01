/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false);
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
ll test;
string str;
/*Function*/

void init(){
	cin >> str;
}
bool Lucky(ll sum){
	ll res = 0;
	while(sum){
		res += sum%10;
		sum/=10;
	}
	if(res == 9 || (res > 9 && Lucky(res)))	return true;
	return false;
}
void solve(){
	ll sum = 0;
	Fu(i, 0, str.size(), 1)
		sum += str[i] - '0';
	if(sum == 9 || Lucky(sum)) cout << 1;
	else cout << 0;
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

