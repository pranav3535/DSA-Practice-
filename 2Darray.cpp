//creating and finding elements in 2D array.

#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the Dimentions of the matrix = ";
    cin>>n>>m;
    cout<<"Enter the elements of the array = ";
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    bool flag = false;
    int x;
    cin>>x;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<"\n";
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"Element is Found! \n";
    }
    else{
        cout<<"Element not found! \n";
    }
    return 0;
}