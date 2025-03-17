#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> li;
    
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    
    li.push_front(10);
    li.push_front(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);
    cout<<"Printing all the element in the list \n";
    
    for(auto i: li){
        cout<<i<<" ";
    }

    
    return 0;
}
