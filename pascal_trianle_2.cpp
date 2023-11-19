#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> generate(int numRows) {

            vector<vector<int>> vec1{{1}, {1, 1}};
            
            for(int i = 1; i < numRows+1; i++){
                vector<int> vec2{1};
                for(int j = 0; j < i; j++){
                    int sum = vec1[i][j] + vec1[i][j + 1];
                    vec2.push_back(sum);
                }
                vec2.push_back(1);
                vec1.push_back(vec2);
            }
            

            return vec1[numRows];
        }
};

int main(){
    vector<int> vec;
    Solution s;

    vec = s.generate(5);
    for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
    }
    
    return 0;
}

// 48

/*  
  1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1
*/