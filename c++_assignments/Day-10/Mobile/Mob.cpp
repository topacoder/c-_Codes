#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

class Mob{
        
        public:
        
        string serialNo;
        string modNo;
        string brandName;
        double price;
        
        Mob(): serialNo(""),modNo(""),brandName(""),price(0){
            cout<<"Default ctor called \n";
        }
        
        Mob(string serialNo,string modNo, string brandName,double price){
            
            this -> serialNo=serialNo;
            this -> modNo=modNo;
            this -> brandName=brandName;
            this -> price=price;
            
        } 
        
        void Display(){
            cout<<"serialNo of mobile = "<<serialNo<<endl;
            cout<<"modal number of mobile = "<<modNo<<endl;
            cout<<"brandName of mobile = "<<brandName<<endl;
            cout<<"price of mobile = "<<price<<endl;
        }
      
};

void addMobileToFile(){
    ofstream fout("mobile.txt", ios::app);
    
    //check if file is available 
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

void displaySorted(){
    vector<string> mobiles = readMobileFromFile();
    sort(mobiles.begin(), mobiles.end());
    for(auto i = mobiles.begin(); i != mobiles.end(); i++){
        cout<<*i<<endl;
    }
}


int main(){
    // addMobileToFile();
    // vector<string> mobiles = readMobileFromFile();

    // for(auto i: mobiles){
    //     cout<<i<<endl;
    // }

    // displaySorted();
    int choice;

    do{

        cout<<"\n 1: Add Mobile Phone"<<"\n 2: Display All mobiles"<<"\n 3: Display sorted mobiles"<<"\n 4: Exit \n";
        cin>>choice;

        switch (choice){
            case 1: {
                addMobileToFile();
                break;
            }
            case 2: {
                vector<string> mobiles = readMobileFromFile();

                for(auto i: mobiles){
                    cout<<i<<endl;
                }
                break;
            }
            case 3: {
                displaySorted();
                break;
            }
            case 4: {
                cout<<"Exiting the program";
                break;
            }
        }
    } while(choice != 4);

    return 0;
}