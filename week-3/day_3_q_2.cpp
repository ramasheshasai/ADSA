// nunbe of prime in an formated way
//sive of aratosthenis

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<< "enter the number ";
	cin>>n;
	int a[n]= {0};
	for (int i = 2 ; i<= sqrt(n) ; i++){
		if(a[i] == 0){
			for(int j = i*i ; j<n ; j+=i){
				a[j]=1;
			}
		}
	}
	int c=0;
	long long int sum=0;
	for(int i = 2 ; i<n ; i++){
		if(a[i]==0){
			c++;
			cout<<i<<" ";
			sum +=i ;
		}
	}
	cout<<"\n";
	cout<<" number of prime numbers "<<c;
	cout<<"\n";
	cout<<"sum of prime numbers "<<sum;
	
}
