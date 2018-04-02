#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==1 or n==0)
		return 1;
	else
		return n*fact(n-1);
}
int sum(int a , int b){
	return (a+b);
}
int main(){
	int n;
	cin >> n;
	cout << fact(n) <<endl;
return 0;
}
///hello
