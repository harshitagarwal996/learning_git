#include<bits/stdc++.h>
using namespace std;
int fact(n){
	if(n==1 or n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main(){
	int n;
	cin >> n;
	cout << fact(n) <<endl;
return 0;
}
///hello
