/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int s[10000];
void snt(){
	for(ll j=2;j<100;j++)
		if(s[j]==0)
			for (ll k=2*j;k<10001;k+=j)
				if(s[k]==0)    s[k]=j;
}
int main(){
    int test;   cin >> test;
    snt();
    while(test--){
        ll n;   cin >> n;
        for(int i=1;i<=n;i++){
            if(s[i])    cout << s[i] << ' ';
            else cout << i << ' ';
        }
        cout << endl;
    }
    IOS()
    return 0;
}