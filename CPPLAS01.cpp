/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

ll compact(ll a){
    int sum=0;
    while(a>0){
        sum+=a%10;
        a/=10;
    }
    if(sum/10)    return compact(sum);
    return sum;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        ll a;
        cin >> a;
        cout << compact(a) << endl;
    }
    IOS()
    return 0;
}