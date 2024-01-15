// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main(){
//     string A, B;
//     cout<<"Enter the String A- "<<endl;
//     getline(cin, A);
//     cout<<"Enter the String B- "<<endl;
//     getline(cin, B);

//     string a = A.substr();
//     cout<<a<<endl;


// }
#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter the value of m : "<<endl;
    cin>>m;
    n = m+1;
    int a[m][n];
    cout<<"Enter the elements of matrix - "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; i++){
            cin>>a[i][j];
        }
    }
    cout<<n<<endl;

    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<a[i][j];
    //     }
    // }
    // cout<<endl;
    return 0;
}