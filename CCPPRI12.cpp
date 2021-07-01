/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;


int main(){
    int test;   cin >> test;
    while(test--){
        ll n,k,count=0;   cin >> n >> k;
        bool done=false;
        for(ll i=2;i<=sqrt(n);i++){
            while(n%i==0){
                n/=i;
                count++;
                if(count==k) break;
            }
            if(count==k){
                cout << i;
                done=true;
                break;
            }
        }
        if(n>1 && count+1==k){
            cout << n;
            done=true;
        }
        if(!done) cout << -1;
        cout << endl;
    }
    IOS()
    return 0;
}