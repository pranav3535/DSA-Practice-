#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "418146791466489";

    sort(s.begin(), s.end(), greater<int>());
    cout<<s;
}