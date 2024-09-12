#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){  // Pass by reference
    int c;
    c = a;
    a = b;
    b = c;
}

int main(){
    int n;
    cin >> n;
    int i;
    int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int l = 0;
    int r = n - 1;
    
    while(l < r){
        if(a[l] == 0){
            l++;
        } 
         if(a[r] == 1){
            r--;
        } 
        else if(a[l] == 1 && a[r] == 0){
            swap(a[l], a[r]);  // Swapping elements by reference
            l++;
            r--;
        }
    }
    
    for(i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

