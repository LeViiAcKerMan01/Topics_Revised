// VECTOR TECHNIQUE

#include<bits/stdc++.h>
using namespace std;

void Print(vector<int> arr[], int m){

    for(int i = 0; i < m; i++){

        for(int j = 0; j < arr[i].size(); j++){

            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){

    int m = 3, n = 2;
    vector<int> arr[m];

    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            arr[i].push_back(i);
        }
    }
    Print(arr, m);

    return 0;
}

// OUTPUT : 0 0 1 1 2 2