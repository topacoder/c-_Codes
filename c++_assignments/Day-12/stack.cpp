#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    
    cout<<"Current top element of stack is: "<<s.top()<<endl;
    
    cout<<"Printing all the stack elements \n";
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
