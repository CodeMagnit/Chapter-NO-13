/* create two classes DM and DB to store the values of distances. DM stores distance in meters and centimeters and DB in feet and inches. write a program that can read values for the class objects and add one object of DM with another object of DB. Hint: Use friend function*/
#include<iostream>
using namespace std;
/*------------------------------------ DM Class ------------------------------*/
class DB;
class DM
{
    private:
    float dis_m,dis_cm;
    public:
    DM()
    {
        cout<<"Enter Distance in Meter: ";
        cin>>dis_m;
        cout<<"Enter Distance in Centimeters: ";
        cin>>dis_cm;
    }
    friend void sum(DM,DB);
};
/*------------------------------------ DB Class ------------------------------*/
class DB
{
    private:
    float dis_feet, dis_inches;
    public:
    DB()
    {
        cout<<"Enter Distance in Feet: ";
        cin>>dis_feet;
        cout<<"Enter Distance in Inches: ";
        cin>>dis_inches;
    }
    friend void sum(DM,DB);
};
void sum(DM obj1, DB obj2)
{
   float meter;
   meter=obj1.dis_m+(obj1.dis_cm/100.0)+(obj2.dis_feet/3.0)+(obj2.dis_inches/0.025);
   cout<<"Total Distance in Meters = "<<meter<<" m"<<endl;
}
/*------------------------------------ Main Function -------------------------*/
int main()
{
    DM obj1;
    DB obj2;
    sum(obj1,obj2);
    return 0;
}
