// VECTOR OF VECTORS TECHNIQUE
// No of rows can also be dynamic in this case
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m = 3; int n = 2;
    vector<vector<int>> arr;

    for(int i = 0; i < m; i++){

        vector<int> v;

        for(int j = 0; j < n; j++){

            v.push_back(10);
        }  
        arr.push_back(v);
    }

    // Print the 2-D array

    for(int i = 0; i < arr.size(); i++){

        for(int j = 0; j < arr[i].size(); j++){

            cout<<arr[i][j]<<" ";
        }
    }
}

// OUTPUT : 10 10 10 10 10 10 