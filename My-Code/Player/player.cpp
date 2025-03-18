#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Player{
    public:
    string name;
    float height;
    int age;

    Player(string name, int age, float height){
        this -> name = name;
        this -> age = age;
        this -> height = height;
    }

    virtual void Display(){
        cout<<"Player's Name: "<<name<<endl;
        cout<<"Player's Height: "<<height<<" feets"<<endl;
        cout<<"Player's Age: "<<age<<endl;
    }
};

class FootBallPlayer: public Player{
    public :
    int goals;
    int matches;
    string team;

    FootBallPlayer(string name, int age, float height, int goals, int matches, string team): Player(name, age, height), goals(goals), matches(matches), team(team) {}

    void Display(){
        Player::Display();
        cout<<"Number of Goals: "<<goals<<endl;
        cout<<"Number of Matches: "<<matches<<endl;
        cout<<"Team: "<<team<<endl;
    }

};

class CricketPlayer: public Player{
    public:
    int runs;
    int wickets;
    string team;


    CricketPlayer(string name, int age, float height, int runs, int wickets, string team): Player(name, age, height){
        this->runs = runs;
        this->wickets = wickets;
        this -> team = team;
    }

    void Display(){
        Player::Display();
        cout<<"Number of Runs: "<<runs<<endl;
        cout<<"Number of Wickets: "<<wickets<<endl;
        cout<<"Team: "<<team<<endl;
    }
};

vector<CricketPlayer *> cricketPlayer;
vector<FootBallPlayer *> footBallPlayer;

void addPlayer(){
    string name;
    int height;
    int age;

    cout<<"Enter Player's Name: ";
    cin>>name;
    cout<<"Enter player's height in cms: ";
    cin>>height;
    cout<<"Enter Player's age: ";
    cin>>age;

    cout<<"Which sport does player play: 1. Cricket, 2. Football"<<endl;
    string sport;
    cin>>sport;

    if(sport == "Cricket" || sport == "cricket" || sport == "1"){
        int runs, wickets;
        string team;

        cout<<"Enter player's runs: ";
        cin>>runs;
        cout<<"Enter player's wickets: ";
        cin>>wickets;
        cout<<"Enter player's team: ";
        cin>>team;

        CricketPlayer * cp = new CricketPlayer (name, height, age, runs, wickets, team);
        cricketPlayer.push_back(cp);
        cout<<"Cricket Player added successfully"<<endl;
    }
    else if(sport == "Football" || sport == "football" || sport == "2"){
        int goals, matches;
        string team;
        cout<<"Enter numbers goals scored: ";
        cin>>goals;
        cout<<"Enter number of matches played: ";
        cin>>matches;
        cout<<"Enter player's team: ";
        cin>>team;

        FootBallPlayer * fp = new FootBallPlayer(name, height, age, goals, matches, team);
        footBallPlayer.push_back(fp);
        cout<<"Football Player added successfully"<<endl;
    }
    else{
        cout<<"Invalid sport"<<endl;
    }
}

void displayFBplayer(){
    if(footBallPlayer.empty()){
        cout<<"No Football Player added yet"<<endl;
        return;
    }

    cout<<"Football player list: \n";
    for(FootBallPlayer * i: footBallPlayer){
        i -> Display();
    }
}

void displayCRplayer(){
    if(cricketPlayer.empty()){
        cout<<"No Football Player added yet"<<endl;
        return;
    }

    cout<<"Cricket player list: \n";
    for(CricketPlayer * i: cricketPlayer){
        i -> Display();
    }
}

int main(){

    int choice;

    do{
        cout << "\nPlayer Management Menu:\n";
        cout << "1. Add Player\n";
        cout << "2. Display Cricket Players\n";
        cout << "3. Display Football Players\n";
        cout << "4. Exit\n";

        cin>>choice;

        switch(choice){
            case 1: {
                addPlayer();
                break;
            }
            case 2: {
                displayCRplayer();
                break;
            }
            case 3: {
                displayFBplayer();
                break;
            }
            case 4: {
                cout<<"Exiting..\n";
                break;
            }
        }

    }while(choice != 4);
    return 0;
}