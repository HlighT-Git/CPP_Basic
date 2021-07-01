/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        ll n,m;
        cin >> n;
        for(ll i=2;i<=sqrt(n);i++){
            m=0;
            while(n%i==0) {
                n=n/i;
                m++;	
            }
            if(m!=0)
                cout << i << ' ' << m << ' ';
        }
        if(n>1) cout << n << " 1";
        cout << endl;
    }
	IOS()
	return 0;
}

