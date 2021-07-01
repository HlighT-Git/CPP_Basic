/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int a,m,x=-1;
        cin >> a >> m;
        for(int i=m-1;i>0;i--)
            if(a*i%m==1)    x=i;
        cout << x << endl;
    }
    IOS()
    return 0;
}