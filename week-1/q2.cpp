#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int helper(int a, int b){
	if(a==b){
		return 0;
	}
	if(a == 1 || b==1){
		return max(a,b)-1;
	}
	int c=0;
	while(b!=0){
		c = c+(a/b);
		int r = a%b;
		a=b;
		b=r;
	}
	return c-1;
}
int main(){
	int a,b;
	cin>>a>>b;
	int d;
	int result = helper(a,b);
	cout<<result;
}
