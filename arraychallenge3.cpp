#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array Size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array Elements = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans= 2; // longest arithmetic subarray in the begining will be 2 basically
    int pd = arr[1]-arr[0];
    int curr = 2; // current length of longest arithmetic subarray
    int j = 2;
    while(j<n){
        if(pd == arr[j]- arr[j-1]){
            curr++;5
        }
        else{
            pd == arr[j] - arr[j-1];
            curr = 2;
        }

        ans = max(ans, curr);
        j++;
    }
    cout<<"The longest arithmetic subarray is = "<<ans<<endl;
    return 0;

}