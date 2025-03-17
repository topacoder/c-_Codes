#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> s;
    
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    
    cout<<"Finding if 3 exists in set \n";
    if(s.find(3) != s.end()) cout<<"Element found \n";
    else cout<<"Element not found \n";
    
    cout<<"Printing all the set elements \n";
    
    for(auto i: s){
        cout<<i<<" ";
    }
    
    return 0;
}
