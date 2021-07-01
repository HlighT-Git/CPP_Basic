/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int sumof(int a){
    int sum=0;
    while(a>0){
        sum+=a%10;
        a/=10;
    }
    return sum;
}
bool isprime(int a){
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0)  return false;
    return true;
}
int main(){
    int test;   cin >> test;
    while(test--){
        ll n,sum=0;   cin >> n;
        string res="NO";
        if(!isprime(n)){
            ll sumN=sumof(n);
            for(ll i=2;i<=sqrt(n);i++)
                while(n%i==0){
                    n/=i;
                    sum+=sumof(i);
                }
            if(n>1) sum+=sumof(n);
            if(sum==sumN)   res="YES";
        }
        cout << res << endl;
    }
    IOS()
    return 0;
}