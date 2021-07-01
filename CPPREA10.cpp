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
int test, nb[10];
string n;

/*Function*/

void init(){
	cin >> n;
}

void solve(){
	stack <int> str;
	Fu(i, 0, n.size()+1, 1){
		if(i ==  n.size() || n[i] - 'D'){
			cout << i+1;
			while(!str.empty()){
				cout << str.top();
				str.pop();
			}
		}
		else str.push(i+1);
	}
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

