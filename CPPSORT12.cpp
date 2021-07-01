/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int n,m;    cin >> n >> m;
        ll a[n],b[m];
        ll maxa,minb,x;
        cin >> maxa;
        for(int i=1;i<n;i++){
            cin >> x;
            if(x>maxa)  maxa=x;
        }
        cin >> minb;
        for(int i=1;i<m;i++){
            cin >> x;
            if(x<minb)  minb=x;
        }
        cout << maxa*minb << endl;
    }
    IOS()
    return 0;
}