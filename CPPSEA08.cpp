/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n,x;    cin >> n >> x;
        int tmp,res=0;
        for(int i=0;i<n;i++){
            cin >> tmp;
            if(tmp == x)    res++;
        }
        if(res) cout << res;
        else    cout << -1;
        cout << endl;
    }
    IOS()
    return 0;
}