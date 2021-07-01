/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        ll n,count=0,prime=0;   cin >> n;
        for(ll i=2;i<=sqrt(n);i++)
            if(n%i==0){
                prime++;
                while(n%i==0){
                    n/=i;
                    count++;
                }
            }
        if(prime==count && ((n>1 && count==2) || (n==1 && count==3))) cout << 1;
        else cout << 0;
        cout << endl;
    }
    IOS()
    return 0;
}