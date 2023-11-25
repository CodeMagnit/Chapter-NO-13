/*Write a class player that contains attribute for the player's name, average and team. Write three functions to input, change and display these attributes. Also write a constructor that asks for input to initialize all the attributes.*/
#include<iostream>
#include<string.h>
using namespace std;
/*--------------------------- Class-----------------------*/
 class player
 {
    private:
    char player_name[20],name[20], team[20],player_team[20];
    float avg,avg1;
    public:
    player()
    {
        cout<<"Enter Player Name: ";
        cin.getline(player_name,20);
        cout<<"Enter Player Team: ";
        cin.getline(player_team,20);
        cout<<"Enter Average: ";
        cin>>avg;
    }
    void input()
    {
        cin.ignore();
        cout<<"Enter Player Name: ";
        cin.getline(player_name,20);
        cout<<"Enter Player Team: ";
        cin.getline(player_team,20);
        cout<<"Enter Average: ";
        cin>>avg;
    }
    void change()
    {
        cin.ignore();
        cout<<"Enter New Player Name: ";
        cin.getline(name,20);
        cout<<"Enter New Player Team: ";
        cin.getline(team,20);
        cout<<"Enter New Average: ";
        cin>>avg1;
        strcpy(player_name,name);
        strcpy(player_team,team);
        avg=avg1;
    }
    void show()
    {
        cout<<"Name: "<<player_name<<endl;
        cout<<"Team:"<<player_team<<endl;
        cout<<"Average: "<<avg<<endl;
    }
 };
/*--------------------------- Main Function--------------*/
int main()
{
    player p1;
    p1.input();
    cout<<"Data Before Updating"<<endl;
    p1.show();
    p1.change();
    cout<<"Data After Updating"<<endl;
    p1.show();
    return 0;
}