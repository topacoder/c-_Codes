#ifndef ___MOB_H___
#define ___MOB_H___

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
        
        Mob();
        Mob(string serialNo,string modNo, string brandName,double price);
        void Display();
};

void addMobileToFile();
vector<string> readMobileFromFile();
void displaySorted();

#endif