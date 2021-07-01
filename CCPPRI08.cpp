/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        ll n,p,x=0;
	    cin >> n >> p;
        if(n>p){
            ll c=log10(n)/log10(p);
            ll tmp=0;
            for(int i=c;i>0;i--){
                x+=(ll)(n/pow(p,i)-tmp)*i;
                tmp=n/pow(p,i);
            }
        }
	    cout << x << endl;
    }
    IOS()
    return 0;
}