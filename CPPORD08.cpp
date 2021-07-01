/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int n;  cin >> n;
        int a,tmp=-999;
        for(int i=0;i<n;i++){
            cin >> a;
            if(a>tmp)   tmp=a;
        }
        cout << tmp << endl;
    }
    IOS()
    return 0;
}