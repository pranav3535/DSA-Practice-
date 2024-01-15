#include <iostream>
using namespace std;

void sievePrime(int n){

    int prime[100]= {0};// first take an array as we decided and give random size also initiate it with 0.

    for(int i=2; i<=n;i++){ // prime nos go from 2 to till n.
        if(prime[i]==0){    // if the number in ith postion of array is marked. marked represented by "0" here.
            for(int j=i*i; j<=n; j+=i){ // when we start from i and then the next number we start marking is from
                prime[j]=1;            // the square of i . so j starts from the square of i.
            }                      // j will increment with respect to i. 
        }
    } 
   for(int i=2; i<=n; i++){ //
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;

    sievePrime(n);
    return 0;
}