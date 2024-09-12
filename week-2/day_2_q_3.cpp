#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 0;
    int m = 0;
    int r = n - 1; 
    while(m <= r){
        if(a[m] == 0){
            swap(a[l], a[m]);
            l++;
            m++;
        }
        else if(a[m] == 1){
            m++;
        }
        else{
            swap(a[m], a[r]);
            r--;  
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}

