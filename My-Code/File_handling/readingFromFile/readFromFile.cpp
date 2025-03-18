#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("readFile.txt");
    
    if(!fin){
        cout<<"Unable to read from file"<<endl;
        return 1;
    }

    /* read data char by char */
    // char ch; int count = 0;
    // while(!fin.eof()){
    //     fin.get(ch);
    //     cout<<ch;
    //     count++;
    // }
    // cout<<"\nTotal characters read: "<<count<<endl;

    /* Read data word by word */
    char ch[20];
    while(!fin.eof()){
        fin>>ch;
        cout<<ch<<" ";
    }

    /*read data line by line */
    string str;
    while (getline(fin, str)) {  
        cout << str << endl;  // Print each line properly
    }

    fin.close();
    return 0;
}