#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void copySongFile(string &srcFile, string &destFile) {
    ifstream fin(srcFile, ios::binary); 
    ofstream fout(destFile, ios::binary);

    if(!fin){
        cout<<"Error, could not open file "<<srcFile<<endl;
    }

    if(!fout){
        cout<<"Error, could not open file "<<destFile<<endl;
    }

    fout<<fin.rdbuf();

    cout<<"File copied successfully"<<endl;

    fout.close();
    fin.close();
}

int main()
{
    string src = "song.mp3";
    string dest = "copy.mp3";

    copySongFile(src, dest);
    return 0;
}