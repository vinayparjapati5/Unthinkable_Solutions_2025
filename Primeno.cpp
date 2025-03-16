#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here

    int n;
    cin>>n;

    if(n<=1){
        cout<<"false";
        return  0;
    }   

    bool isPrime = true;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime) cout<<"true";
    else cout<<"false";
    return 0;
}
