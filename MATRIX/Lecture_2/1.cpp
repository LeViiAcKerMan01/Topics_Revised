#include<bits/stdc++.h>
using namespace std;

void Print(int mat[3][2]){
// This function is only suppose to recieve a 3 * 2 matrix
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 2; j++){

            cout<<mat[i][j]<<" ";
        }
    }
}

int main(){

    int mat[3][2] = {{10, 20}, {30, 40}, {50, 60}};

    Print(mat);

    return 0;
}

// OUTPUT : 10 20 30 40 50 60 