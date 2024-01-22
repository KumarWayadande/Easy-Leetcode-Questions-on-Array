
/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : passed
--------------------------------------
*/

#include <iostream>
using namespace std;

class MyHashSet
{
public:
    bool arr[10000000+10];
    MyHashSet()
    {
    }

    void add(int key)
    {
        arr[key] = true;
    }

    void remove(int key)
    {
        arr[key] = false;
    }

    bool contains(int key)
    {
        return (arr[key]) ? true : false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

int main()
{
    MyHashSet *obj = new MyHashSet();
    int key = 10;
    obj->add(key);
    obj->remove(key);
    bool param_3 = obj->contains(key);

    return 0;
}