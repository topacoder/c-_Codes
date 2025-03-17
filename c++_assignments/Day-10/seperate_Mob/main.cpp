#include "Mob.h"

int main(){
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