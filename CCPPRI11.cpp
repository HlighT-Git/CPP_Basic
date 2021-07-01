/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        ll n, res=0;   cin >> n;
        ll pn[10];   pn[0]=2;    
        pn[1]=3;    pn[2]=5;    
        pn[3]=7;    pn[4]=13;   
        pn[5]=17;   pn[6]=19;
        pn[7]=31;   
        for(ll i=0;i<8;i++){
            ll x=pow(2,pn[i]-1)*(pow(2,pn[i])-1);
            if(x==n)    res=1;
        }
        cout << res << endl;
    }
    IOS()
    return 0;
}

