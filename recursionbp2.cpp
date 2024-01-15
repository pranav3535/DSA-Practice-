// replace pi with 3.14 in a string.

#include <iostream>
using namespace std;

void replacePi(string s){
    if(s.length() == 0){ // base case 
        return;
    }

    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        replacePi(s.substr(2)); // if condition matches pi will be replaced
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1)); // if condition doesnt matches then it will print the current character of the string.
    }
}
int main(){
        replacePi("pippppiiiipi");
        return 0;
}
