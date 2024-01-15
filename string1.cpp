#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str = "asbjasdfba";

   //  cout<< 'a' - 'A'<<endl; diff btw the lower a - upper A = 32 
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i]<= 'z'){ // all characters of string from a to z 
            str[i] -= 32; // subtract everyone by 32 as the diff btw them and their upper case is 32.
        }
    }          // STRING FIRST CONVERTED TO UPPER CASE
    cout<<str<<endl;
    //similarly to convert a string to upper case we can do the reverse by adding 32

    for(int i=0; i<str.size(); i++){
        if(str[i] >='A' && str[i] <='Z'){
            str[i] += 32;
        }
    }         // SAME CONVERTED STRING CONVERTED BACK TO LOWERCASE AGAIN.
    cout<<str;
    
    return 0;
}