#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Sports{
    public:
    string name;
    float fees;
    //also take input of type of sports at the time of function creation

    Sports(string name, float fees){
        this->name = name;
        this->fees = fees;
    }

    virtual void Display() = 0;
};

class IndoorGame: public Sports{
    public:
    string venusType;

    IndoorGame(string name, float fees, string venusType):Sports(name, fees){
        this->venusType = venusType;
    }

    void Display() override{
        cout<<"Indoor games: "<<name<<", Fees: "<<fees<<", Venue type: "<<venusType<<endl;
    }

};

class OutdoorGame: public Sports{
    public:
    string groundType;

    OutdoorGame(string name, float fees, string groundType):Sports(name, fees){
        this -> groundType = groundType;
    }

    void Display() override{
        cout<<"Outdoor games: "<<name<<" , Fees: "<<fees<<" , ground Type: "<<groundType<<endl;
    }
};

/* This is the most important class in this whole sports management system */
class Player{
    public:

    int uniqueId;
    string player_name;
    vector<Sports *> sportList;

    Player(int uniqueId, string player_name){
        this->uniqueId = uniqueId;
        this->player_name = player_name;
    }

    void addInSports(Sports *sport){
        sportList.push_back(sport);
        cout<<player_name<<" successfully enrolled in: "<<sport -> name<<".\n";
    }

    void Display(){
        cout<<"Player id: "<<uniqueId<<endl;
        cout<<"Player name: "<<player_name<<endl;
        cout<<"Sports enrolled: "<<endl;
        for(auto &i: sportList){
            i->Display(); //displaying the sports
        }
    }
};

vector<Player> players;
vector<Sports *> sportsList;

void addNwePlayer(){
    int id;
    string name;

    cout<<"Enter player id: \n";
    cin>>id;

    cout<<"Enter player name \n";
    cin>>name;

    Player * p = new Player(id, name);
    players.push_back(*p);

    cout<<"Player Added successfully \n";
}

void addNewSport(){
    string name;
    float fees;
    string type;

    cout<<"Enter sport name: \n";
    cin>>name;

    cout<<"Enter sports fees: \n";
    cin>>fees;

    cout<<"Enter type of sport: (Enter Indoor or Outdoor)\n";
    cin>>type;

    if(type == "Indoor"){
        string venue;
        cout<<"Enter venue type: (Hall, Court, Table) \n";
        cin>>venue;

        IndoorGame * ig = new IndoorGame(name, fees, venue);
        sportsList.push_back(ig);
    }
    else if(type == "Outdoor"){
        string ground;
        cout<<"Enter ground type: (Grass, Clay) \n";
        cin>>ground;
        OutdoorGame * og = new OutdoorGame(name, fees, ground);
        sportsList.push_back(og);
    }
    else cout<<"Invalid Sport type \n";
}

void enrollPlayerInSport(vector<Player> &players, vector<Sports *> &sportsList){
    int playerId;
    string sportsName;

    cout << "Enter player ID: ";
    cin >> playerId;

    cout << "Enter sport name: ";
    cin >> sportsName;

    Player* player = nullptr;

    for (auto &p : players) {  
        if (p.uniqueId == playerId) {
            player = &p;  
            break;
        }
    }

    if (!player) {
        cout << "Player not found!\n";
        return;
    }

    for (auto* sport : sportsList) {  
        if (sport->name == sportsName) {
            player->addInSports(sport);  
            cout << "Player enrolled successfully in \n";
            return;
        }
    }

    cout << "Sport not found!\n";
}

void displayIndoorPlayers() {
    cout << "\nPlayers enrolled in Indoor Games:\n";

    for (auto &player : players) {
        bool hasIndoor = false;

        for (auto* sport : player.sportList) {
            if (typeid(*sport) == typeid(IndoorGame)) { //check if the class is sports
                hasIndoor = true;
                break;
            }
        }

        if (hasIndoor) player.Display();
    }
}

void displayOutdoorPlayers() {
    cout<<"Player enrolled in Outdoor Games:\n";

    for(auto &player: players){
        bool hasOutdoor = false;

        for(auto * sport: player.sportList){
            if(typeid(*sport) == typeid(OutdoorGame)){
                hasOutdoor = true;
                break;
            }
        }

        if(hasOutdoor) player.Display();
    }
}

void displayAllPlayers() {
    cout << "\nAll Players:\n";

    for(auto &player: players){
        player.Display();
    }
}

int main()
{
    int choice;
    do{
        cout<<"Sports Management system \n";
        cout<<"1. Add new player \n";
        cout<<"2. Add new sport \n";
        cout<<"3. Enroll player into sport \n";
        cout<<"4. Display the player with Indoor game \n";
        cout<<"5. Display the player with Outdoor game \n";
        cout<<"6. Display all players with their registered sports \n";
        cout<<"7. Exit \n";

        cin>>choice; 
        switch(choice){
            case 1: {//Add new player
                addNwePlayer();
                break;
            }
            case 2: {//Add new sport
                addNewSport();
                break;
            }
            case 3: { //enroll player into sport
                enrollPlayerInSport(players, sportsList);
                break;
            }
            case 4: {
                displayIndoorPlayers();
                break;
            }
            case 5: {
                displayOutdoorPlayers();
                break;
            }
            case 6: {
                displayAllPlayers();
                break;
            }
            case 7: {
                cout<<"Exiting... \n";
                break;
            }
        }
    }while(choice != 7);
    return 0;
}