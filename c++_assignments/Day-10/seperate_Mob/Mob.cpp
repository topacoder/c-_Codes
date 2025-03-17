#include "Mob.h"

Mob::Mob(){
    serialNo = "";
    modNo = "";
    brandName = "";
    price = 0.0;
}

Mob::Mob(string serialNo,string modNo, string brandName,double price){
    this -> serialNo=serialNo;
    this -> modNo=modNo;
    this -> brandName=brandName;
    this -> price=price;
}

void Mob::Display(){
    cout<<"serialNo of mobile = "<<serialNo<<endl;
    cout<<"modal number of mobile = "<<modNo<<endl;
    cout<<"brandName of mobile = "<<brandName<<endl;
    cout<<"price of mobile = "<<price<<endl;
}

//function to add mobile to file
void addMobileToFile(){
    ofstream fout("mobile.txt", ios::app);
    
    if(!fout){
        cout<<"Error opening file \n";
        return;
    }
    
    Mob m;
    cout<<"Enter serialNo, modal number, brandName, price: \n";
    cin>>m.serialNo>>m.modNo>>m.brandName>>m.price;
    
    fout<<m.serialNo<<" "<<m.modNo<<" "<<m.brandName<<" "<<m.price<<endl;
    
    fout.close();
    cout<<"Mobile phone added successfully \n";
}

//function to read all mobiles from file
vector<string> readMobileFromFile(){
    vector<string> mobiles;
    
    ifstream fin("mobile.txt");
    
    if(!fin){
        cout<<"No records Available in file \n";
        return mobiles;
    }

    string str;
    while(getline(fin, str)){
        mobiles.push_back(str);
    }
    
    fin.close();
    return mobiles;
}

//function for displaying all mobiles(sorted)
void displaySorted(){
    vector<string> mobiles = readMobileFromFile();
    sort(mobiles.begin(), mobiles.end());
    for(auto i = mobiles.begin(); i != mobiles.end(); i++){
        cout<<*i<<endl;
    }
}