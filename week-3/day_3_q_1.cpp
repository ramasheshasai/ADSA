// prime in an formated way

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	int c=0;
	long long int sum=0;
	cout<< "enter the number ";
	cin>>n;
	for(int i=2;i<n ;i++){
		int flag = 0;
		if(i!=2 && i%2 ==0){
			flag=1;	
			
		}
		else if(i!=3 && i%3 ==0){
			flag = 1;
		}
		else{
			for(int j=5 ; j<=sqrt(i) ; j++){
				if(i%j == 0 && n %(j+2) == 0 ){
					flag =1;
					break;
				}
			}
		
		}
		if(flag==0){
			cout<<i<<" ";
			c++;
			sum= sum+i;
		}
	}
		cout<<"number of numbers : - "<<c;
		cout<<"sum of numbers : - "<<sum;
	
}
