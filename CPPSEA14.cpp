/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
const int maxN = 1e6+5;
bool check[maxN];
int n,a[maxN];
void reset(){
    for(int i=0; i<n; i++)
        check[a[i]]=false;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> n;
        int res=-1;
        bool done=false;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(!done && check[a[i]]){
                done=true;
                res=a[i];
            }
            else check[a[i]]=true;
        }
        cout << res << endl;
        reset();
    }
    IOS()
    return 0;
}