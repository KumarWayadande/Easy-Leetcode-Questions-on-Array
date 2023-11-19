#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<vector<int>> generate(int numRows) {

            vector<vector<int>> vec1{{1}};

            if(numRows == 1)
                return vec1;
            
            if(numRows == 2){   
                vec1.push_back({1, 1});
                return vec1;
            }

            vec1.push_back({1, 1});
            
            for(int i = 1; i < numRows - 1; i++){
                vector<int> vec2{1};
                for(int j = 0; j < i; j++){
                    int sum = vec1[i][j] + vec1[i][j + 1];
                    vec2.push_back(sum);
                }
                vec2.push_back(1);
                vec1.push_back(vec2);
            }
            

            return vec1;
        }
};

int main(){
    vector<vector<int>> vec;
    Solution s;

    vec = s.generate(10);
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// 48