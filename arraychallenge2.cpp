//   Find the sum of all subarrays in an array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the Array Size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Array Elements = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int curr=0;
    for(int i=0; i<n; i++){
        curr = 0;
        for(int j=i; j<n; j++){
            curr += arr[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}