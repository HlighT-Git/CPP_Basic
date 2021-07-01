/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

void Minus(string A, string B){
    int a=A.length();
    int b=B.length();
    int c=a-b;
    if(c<0){
        swap(A,B); 
        swap(a,b);
        c=-c;
    }
    if(c==0){
        int i=0;
        while(A[i]==B[i])   i++;
        if(A[i]<B[i]){
            swap(A,B);
            swap(a,b);
        }
    }
    while(c--)  B='0'+B;
    string res="";
    int remember=0,i=a;
    while(i--){
        int n1=A[i]-'0';
        int n2=B[i]-'0';
        n1-=remember;
        remember=0;
        int x=n1-n2;
        if(x<0){
            x+=10;
            remember++;
        }
        res=(char)(x+'0')+res;
    }
    cout << res << endl;
}
int main(){
    int test;   cin >> test;
    while(test--){
        string X,Y;
        cin >> X >> Y;
        Minus(X,Y);
    }
    IOS()
    return 0;
}