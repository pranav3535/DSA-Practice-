// The Tower of Hanoi Problem using recursion

#include <iostream>
using namespace std; 

// src= source(A), helper = B, dest = destination(C).

void toh(int n, char src, char dest, char helper ){
    if(n==0){
       return;//base case
    }

    toh(n-1, src, helper, dest);// from src to helper which is (dest) && destis used as (helper)
    cout<<"Move From "<<src<<" To "<<dest<<endl;

    toh(n-1, helper, dest, src);//here helper is considered as src and src is considered as helper and destination is assumed the destination.

}

int main(){
    
    toh(3,'A','C','B');

    return 0;
}

