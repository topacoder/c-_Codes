#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int, string> mp;
    
    mp.insert({1, "Name1"});
    mp.insert({2, "Name2"});
    mp.insert({3, "Name3"});
    mp.insert({4, "Name4"});
    mp.insert({5, "Name5"});
    
    cout<<"Printing all the key value pair from map \n";
    
    for(auto i: mp){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    
    cout<<"Finding the value at key 4 \n";
    
    auto it = mp.find(4);
    if(it != mp.end()){
        cout<<"Key: "<<it -> first<<" -> "<<it -> second;
    }
    
    return 0;
}
