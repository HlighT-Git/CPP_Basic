/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

bool isprime(int a){
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0)  return false;
    return true;
}
int GCD(int a, int b){
    if(b==0)    return a;
    return GCD(b, a%b);
}
int main(){
    int test;   cin >> test;
    while(test--){
        int n,count=0,res=0;  cin >> n;
        for(int i=1;i<n;i++)
            if(GCD(i, n)==1) count++;
        if(isprime(count))    res=1;
        cout << res << endl;
    }
    IOS()
    return 0;
}