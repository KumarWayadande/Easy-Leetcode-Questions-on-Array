/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : passed
Improved Logic : yes
--------------------------------------
*/

#include <iostream>
#include <vector>
using namespace std;
class MyHashMap
{
public:
    vector<int> hashMap;
    int n = (1000000 + 10);
    MyHashMap()
    {
        hashMap.resize(1000000 + 10, -1);
    }

    void put(int key, int value)
    {
        hashMap[key % n] = value;
    }

    int get(int key)
    {
        return hashMap[(key % n)];
    }

    void remove(int key)
    {
        hashMap[key % n] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

int main()
{
    return 0;
}


/*
--------------------------------------
End of code version 1
test cases  passed
--------------------------------------
*/


/*

class MyHashMap {
public:
    int mp[1000001];    

    MyHashMap() {
        for (int i = 0; i < 1000001; ++i) {
            mp[i] = -1;
        }
    }
    
    void put(int key, int value) {
        mp[key] = value;
    }
    
    int get(int key) {
        return mp[key];
    }
    
    void remove(int key) {
        mp[key] = -1;
    }
};


 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);

*/