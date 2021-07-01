/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int T;  cin >> T;
    while(T--){
        int n,k;
        cin >> k >> n;
        int x=n*k,a[x];
        for(int i=0; i<x; i++)    cin >> a[i];
        sort(a, a+x);
        for(int i=0; i<x; i++)    cout << a[i] << ' ';
        cout << endl;
    }
    IOS()
    return 0;
}