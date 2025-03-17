#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr;
    
    arr.push_back(1);    
    arr.push_back(2);    
    arr.push_back(3);    
    arr.push_back(4);
    
    vector<int>::iterator it = arr.begin();
    
    for(; it!=arr.end(); it++){
        cout<< *it <<" ";
    }
    return 0;
}
