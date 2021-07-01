/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
 
void Strlwr(char a[]){
    for(int i=0; i<strlen(a)-1; i++)
        if(a[i]<91 && a[i]>64) a[i] += 32;
}
int main(){
    char a[1000];   fgets(a, 1000, stdin);
    Strlwr(a);
    int stop1=strlen(a)-1;
    while(a[stop1] != ' ')   stop1--;
    int stop2=stop1;
    while(a[stop2] == ' ')   stop2--;
    stop2++;
    for(int i=0; i<stop2; ){
        if(a[i] == ' '){
            int start=i;
            while(a[i] == ' ')  i++;
            if(start!=0)    cout << ' ';
        }
        cout << (char)(a[i]-32);
        i++;
        while(a[i] != ' ' && i<stop2){
            cout << a[i];
            i++;
        }
    }
    cout << ", ";
    for(int i=stop1+1; i<strlen(a)-1; i++)
        cout << (char)(a[i]-32);
    IOS()
    return 0;
}