/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        ll n,k;
        cin >> n >> k;
        ll tmp=n/k,bonus=n-tmp*k;
        cout << (k*(k-1)/2)*(n/k) + bonus*(bonus+1)/2 << endl;
    }
    IOS()
    return 0;
}