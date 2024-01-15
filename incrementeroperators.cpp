#include<iostream>
using namespace std;

int main() {
    int i=10;
    int j=20;
    int k;
//      10    9     19    20     9     20    10    19             
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
//      9     10    19    20     9     19    10     20                
    cout<<i<<" \n"<<j<<" \n"<<k<<" \n"<<endl;
    return 0;
}