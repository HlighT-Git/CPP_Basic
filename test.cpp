/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
	int test;	cin >> test;
	while(test--){
		int a, b, c, d, e, f, g, h;
		cin >> a >> b >> c >> d >> e >> f;
		if(a==c)	g=e;
		else if(a==e)	g=c;
		else g=a;
		if(b==d)	h=f;
		else if(b==f)	h=d;
		else h=b;
		cout << g << ' ' << h;
	}
	IOS()
	return 0;
}

