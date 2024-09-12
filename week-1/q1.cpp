#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int helper(int a, int b){
	int count=0;
	if(a==b)
	return 0;
	if(a==1||b==1){
		cout<<"count is "<< max(a,b)-1;
	}
	else{
	
	while(a!=b){
		count++;
		int d=a-b;
		if(a>b){
			if(d>b){
				a=d;
			}else{
				a=b;
				b=d;
			}
		}else{
			if(d>a){
				b=a;
				a=b;
			}else{
				b=d;
			}
		}	
	}
	return count;
}
}
int main(){
	int a,b;
	cin>>a>>b;
	int d;
	int result = helper(a,b);
	cout<<result;
}
