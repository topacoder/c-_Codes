#include<iostream>
using namespace std;

class Time{
    public:

    int hrs;
    int mins;
    int secs;

    Time(){
        hrs = 0;
        mins = 0;
        secs = 0;
    }

    void convert(){
        while(secs >= 60){
            secs -= 60;
            mins++;
        }
        while (mins >= 60){
            mins -= 60;
            hrs++;
        }
        
        while (hrs >= 24){
            hrs %= 24;
        }
    }

    Time operator + (Time t){
        Time t1;
        t1.hrs = hrs + t.hrs;
        t1.mins = mins + t.mins;
        t1.secs = secs + t.secs;
        return t1;
    }

    Time operator - (Time T){
        Time t1;
        t1.hrs = hrs - T.hrs;
        t1.mins = mins - T.mins;
        t1.secs = secs - T.secs;

        return t1;
    }

    void Read(){
        cout<<"Enter hours: ";
        cin>>hrs;
        cout<<"Enter minutes: ";
        cin>>mins;
        cout<<"Enter seconds: ";
        cin>>secs;
    }

    void Display(){
        cout<<"Time: "<<hrs<<" hours, "<<mins<<" minutes, "<<secs<<" seconds"<<endl;
    }
};

int main()
{
    Time t1, t2;
    t1.Read();
    t1.Display();

    t2.Read();
    t2.Display();
    cout<<"Addition: "<<endl;
    Time t3 = t1 + t2;
    t3.convert();
    t3.Display();


    return 0;
}