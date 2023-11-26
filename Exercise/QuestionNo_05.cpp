/* Write a class Car that contains the followig attributes:
    1.  The name of car
    2.  The direction of car (E,W,N,S)
    3.  The position of car (From imaginary zero point)
 Class has following member functions:
    1. A constructor to initaizlize the attributes
    2. Turn function to change the direction of car to one step right side
    (e.g. if the direction is to E, it should be change to S and so on)
    3. Overload the Turn function to change the direction to any side directly. it should  accept the direction as parameter.
    4. Move function to change the position of car away from zero point. It should accept distance as parameter.
*/
#include<iostream>
using namespace std;
/*--------------------------------- Class Car---------------------------------*/
class car
{
    private:
    char car_name[20];
    char direction;
    int position,p;
    public:
    car()
    {
        cout<<"Enter Car Name: ";
        cin.getline(car_name,20);
        direction='E';
        position=0;
    }
    void turn()
    {
        cout<<"Choose Direction You Want to Turn"<<endl;
        cout<<"E. East"<<endl;
        cout<<"W. West"<<endl;
        cout<<"N. North"<<endl;
        cout<<"S. South"<<endl;
        cout<<"Enter Direction: ";
        cin>>direction;
        switch(direction)
        {
            case 'E':
            case 'e':
            direction='E';
            break;
            case 'W':
            case 'w':
            direction='W';
            break;
            case 'N':
            case 'n':
            direction='N';
            break;
            case 'S':
            case 's':
            direction='S';
             break;
            default:
             cout<<"Invalid Direction, Select from(E,W,N,S)...."<<endl;
        }
    }
    void turn(char d)
    {

        switch(d)
        {
            case 'E':
            case 'e':
            direction='E';
            break;
            case 'W':
            case 'w':
            direction='W';
            break;
            case 'N':
            case 'n':
            direction='N';
            break;
            case 'S':
            case 's':
            direction='S';
            break;
            default:
            cout<<"Invalid Direction, Select from(E,W,N,S)...."<<endl;
        }
    }
    void move()
    {
        cout<<"Enter length you want to move car: ";
        cin>>p;
        p+=position;
        cout<<"You move from "<<position<<" TO "<<p;

    }
};
/*--------------------------------- Main function-----------------------------*/
int main()
{
    char d;
    car c1;
    c1.turn();
    cout<<"Choose Direction You Want to Turn"<<endl;
    cout<<"E. East"<<endl;
    cout<<"W. West"<<endl;
    cout<<"N. North"<<endl;
    cout<<"S. South"<<endl;
    cin>>d;
    c1.turn (d);
    c1.move();
    return 0;
}