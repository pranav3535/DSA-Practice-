#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s ="aoviruegtbirueytee";
    int freq[26]; // total characters 26 || a=0, b=1, c=2....z=26.

    for(int i=0; i<26; i++){  
        freq[i]= 0; //    a=0, b=1, c=2....z=26.
    }
    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a']++;  
    }
    char ans= 'a';
    int maxF = 0;
    for(int i=0; i<26; i++){
        if(freq[i]>maxF){
            maxF= freq[i];
            ans = i+'a';
        }
    }
    cout<<ans<<" "<<maxF<<endl;
    return 0;

}