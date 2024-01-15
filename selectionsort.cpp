#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size = ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements = ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"The sorted array is = ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

    
}