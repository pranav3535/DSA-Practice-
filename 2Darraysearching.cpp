// Find element in a matrix with sorted array rows/ columns.
//  1 2 3 --> sorted in increasing order
//  4 5 6 --> sorted in increasing order  (Rows sorted in increasing order)
//  7 8 9 --> sorted in increasing order
//  | | |   (Columns sorted in increasing order)
//  V V V
//  sorted in increasing order
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the Dimentions of matrix = ";
    cin>>n>>m;
    int mat[n][m];
    cout<<"Enter the elements of matrix = ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    // logic to find the element. 
    int target;
    cout<<"What to find = ";
    cin>>target;
    int r = 0, c = m-1;
    bool found = false ;
    while( r < n && c >= 0){
        if(mat[r][c] == target){
            found = true;
        }
        if(mat[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element  mila";
    }
    else{
        cout<<"Element nahi mila";
    }
    return 0;
}