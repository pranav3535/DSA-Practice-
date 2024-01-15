#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "afihaiurhfgi";
        //   [full string passed][from here][to perform the gien task]
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
    return 0;
}