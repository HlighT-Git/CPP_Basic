/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        string n;
        ll m,rs=0;
        cin >> n >> m;
        for(int i=0;i<n.size();i++)
            rs=(rs*10+(n[i]-'0'))%m;
        cout << rs << endl;
    }
    IOS()
    return 0;
}