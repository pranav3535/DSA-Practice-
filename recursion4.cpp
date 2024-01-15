// find the n th fibonacci number.

#include <iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}

// #include<iostream>
// using namespace std;
// int fib(int n){
//     int nextTerm, t1= 0 , t2= 1;
//     for(int i=0; i<=n; i++){
//         cout<<t1<<endl;
//         nextTerm = t1+t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     return 0;
// } 

// int main(){
//     int n;
//     cin>>n;
//     fib(n);
//     return 0;
    
// }