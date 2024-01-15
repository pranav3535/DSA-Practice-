//Q- Code for Matrix multiplication.
// (3*4)       (4*3)          (3*3)
// 2 4 1 2     1 2 3         33 42 51
// 8 4 3 6  X  4 5 6  --->   69 90 111
// 1 7 9 5     7 8 9  --->   112 134 156
//             4 5 6
// N1 = 3, N2 = 4, N3 = 3.

#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3;
    cout<<"Enter the Dimentions of the matrix = ";
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    cout<<"Enter the Elements of the matrix1 = ";
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>m1[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter the Elements of the matrix2 = ";
     for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin>>m2[i][j];
        }
    }
    cout<<endl;
    int ans[n1][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            ans[i][j]=0;
        }
    }

    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                ans[i][j]+= m1[i][k]*m2[k][j];
            }
        }
    }
    cout<<"The Result multiplication matrix is :-  \n";
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}