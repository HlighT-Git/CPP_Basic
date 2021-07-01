/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int s[10000000];
void snt(ll n){
	for(ll j=2;j<=n;j++)
		if(s[j]==0){
			for (ll k=2*j;k<n+1;k+=j)
				s[k]=1;
            cout << j << ' ';
        }
}
int main(){
    int test;   cin >> test;
    while(test--){
        ll n;   cin >> n;
        snt(n);
        cout << endl;
    }
    IOS()
    return 0;
}