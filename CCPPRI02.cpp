/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        ll n;   cin >> n;
        for(ll i=2;i<=sqrt(n);i++){
            while(n%i==0)   n/=i;
            if(n==1)    cout << i << ' ';
        }
        if(n>1) cout << n;
        cout << endl;
    }
    IOS()
    return 0;
}