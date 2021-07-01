/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int a[21],n;
bool finished=false;
void init(){
    finished=false;
    for(int i=1;i<=n;i++) a[i]=0;
}
void display(){
    for(int i=1;i<=n;i++)
        cout << a[i];
    cout << ' ';
}
void next(){
    int i=n;
    while(a[i]) i--;
    if(i){
        a[i]=1;
        for(int j=i+1;j<=n;j++) a[j]=0;
    }
    else finished=true;
}
int main(){
    int test;   cin >> test;
    while(test--){
        cin >> n;
        init();
        while(!finished){
            display();
            next();
        }
        cout << endl;
    }
    IOS()
    return 0;
}