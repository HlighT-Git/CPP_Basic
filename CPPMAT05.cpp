/*Cre: H.LighT*/
#include<bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long i64;
int matrix[105][105];
int n;

i64 findMinOpeartion() { 
    int sumRow[105], sumCol[105]; 
    memset(sumRow, 0, sizeof(sumRow)); 
    memset(sumCol, 0, sizeof(sumCol));
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) { 
            sumRow[i] += matrix[i][j]; 
            sumCol[j] += matrix[i][j]; 
        } 
    int maxSum = 0; 
    for (int i = 0; i < n; ++i) { 
        maxSum = max(maxSum, sumRow[i]); 
        maxSum = max(maxSum, sumCol[i]); 
    } 
  
    i64 count = 0; 
    for (int i = 0, j = 0; i < n && j < n;) { 
        i64 diff = min(maxSum - sumRow[i], 
                       maxSum - sumCol[j]); 
        matrix[i][j] += diff; 
        sumRow[i] += diff; 
        sumCol[j] += diff; 
        count += diff; 
        if (sumRow[i] == maxSum) 
            ++i; 
        if (sumCol[j] == maxSum) 
            ++j; 
    } 
    return count; 
} 
void input(){
    cin >> n;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> matrix[i][j];
        }
    }
}
void solve(){
    cout << findMinOpeartion() << endl;
}
int main(){
    int t=1; 
    cin>>t;
    while(t--){ 
        input();
        solve();
    }
    IOS()
    return 0;
}

 
 
