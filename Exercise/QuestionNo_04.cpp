/*Write a class Run that contains the following data memebers:
    1.  The Name of Runner
    2.  The distance covered by Runner
The Class has following member functions:
    1.  Get function to input runner name and distance
    2.  Show function to display runner name and distance
The user should be able to show the name of the runner who was covered the longest distance at any point of time. Hint: Use static Data members.
*/
#include<iostream>
using namespace std;
/*------------------------- Class Runner ------------------------------*/
class run
{
    private:
    string name;
    float dis;
    static string wname;
    static float distance;
    public:
    void get()
    {
        cout<<"Enter Distance: ";
        cin>>dis;
        cin.ignore();
        cout<<"Enter Runner Name: ";
        getline(cin,name);
        
        if(dis>distance)
        {
            distance=dis;
            wname=name;
        }
        else if(dis==distance)
        {
            cout<<"Both have covered same distance"<<endl;
            exit(0);
        }
        
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Distance: "<<dis<<endl;
    }
    static void winner()
    {
        
        cout<<"Name: "<<wname<<endl;
        cout<<"Distance: "<<distance<<endl;
    }
    
};
string run::wname="";
float run::distance=0;
/*------------------------ Main Function ------------------------------*/
int main()
{
    run r1,r2;
    r1.get();
    r2.get();
    cout<<"Runner 1"<<endl;
    r1.show();
    cout<<"Runner 2"<<endl;
    r2.show();
    cout<<"Runner covered More distance"<<endl;
    run::winner();
    return 0;
}