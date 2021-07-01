/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

unsigned countWords(char *str){  
    int state = 0;  
    unsigned res = 0;
    while (*str){  
        if (*str == ' ' || *str == '\n' || *str == '\t')  
            state = 0;  
        else if (state == 0){  
            state = 1;  
            ++res;  
        }   
        ++str;  
    }  
    return res;  
}  
int main(){
    int test;
    cin >> test;
    int error=test;
    while(test--){
        char a[10000];
        fgets(a, 10000, stdin);
        if(test==error - 1) fgets(a, 10000, stdin);
        cout << countWords(a) << endl;
    }
    IOS()
    return 0;
}