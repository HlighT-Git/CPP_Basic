/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

string Plus(string a, string b){
    int len=max(a.length(),b.length());
    while(a.length()<len)   a='0'+a;
    while(b.length()<len)   b='0'+b;
    int rmb=0;
    string res="";
    for(int i=len-1;i>=0;i--){
        int n1=a[i]-'0';
        int n2=b[i]-'0';
        int count=n1+n2+rmb;
        char tmp=count%10+'0';
        res=tmp+res;
        rmb=count/10;       
    }
    if(rmb!=0) return char(rmb+'0')+res;
    return res;
}

int main(){
    int test;   cin >> test;
    while(test--){
        string X,Y;
        cin >> X >> Y;
        cout << Plus(X,Y) << endl;
    }
    IOS()
    return 0;
}