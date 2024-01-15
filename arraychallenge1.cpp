// Q- Find the max prefix of the array. 
// arr[-9, 0, 3, 1, 8]
//      |  |  |     | 
// --> -9, 0, 3, 3, 8.


#include <iostream>
using namespace std;
int main(){
    int mx = -199999; // Initiate with a very small number. 
    int n;
    cout<<"Enter the Array Size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The max of Array elements = ";
    for(int i=0; i<n; i++){
        mx= max(mx, arr[i]);  // mx= maximum value between mx=-199999 and element of array at any index postion arr[i].
            cout<<mx<<" ";
    }
    cout<<endl;
}