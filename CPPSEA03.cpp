/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int n;
        cin >> n;
        int x, tmp=1,res=n;
        bool done=false;
        for(int i=0;i<n-1;i++){
            cin >> x;
            if(!done && x > tmp){
                res=tmp;
                done=true;
            }
            tmp++;
        }
        cout << res << endl;
    }
    IOS()
    return 0;
}