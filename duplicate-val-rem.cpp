#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v{1, 2, 4, 4, 5};

    // int pos = 0;
    // for(int i = 0; i < v.size(); i++){
    //     if(v[i] != 4){
    //         v[pos] = v[i];
    //         pos++;
    //     }
    // }


    int val = 4;
    int pos = 0;
    for(int n : v){
        if(n != val){
            v[pos] = n;
            pos++;
        }
    }
    
    // pos = 3
    // size = 5
    int tempPos = pos;
    for(tempPos = pos; tempPos <= v.size(); ++tempPos){
        v.pop_back();
    }


    // cout << "[";
    // for(int n = 0; n < pos; n++){
    //     cout << v[n] << " ";
    // }
    // cout << "]";
    
    cout << "[";
    for(int n : v){
        cout << n << " ";
    }
    cout << "]";

    return 0;
}