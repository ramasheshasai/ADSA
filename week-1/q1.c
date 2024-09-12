#include<iostream>
using namespace std;
int result(int a,int b){
	if(a==b){
		return 0;
	}
	if(a==1 || b==1){
		return max(a,b)-1;
	}
	int c=0;	
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a;
		cin>>b;
		int res = result(a,b);
		cout<<res<<endl;
	}
}
