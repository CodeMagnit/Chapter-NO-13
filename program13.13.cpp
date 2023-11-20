/*Write a class Travel that has the attributes of kilometer and hours. A constructor with no perameter initialize both data members to 0. A member function get() inputs the values and function show() displays the values. It has a member function add() that takes an object of type Travel to add the kilometers and houres of calling object and the parameter.*/
#include<iostream>
using namespace std;
class Travel
{
    private:
    float km,hr;
    public:
    Travel()
    {
        km=0;
        hr=0;
    }
    void get()
    {
        cout<<"Enter Kilometers You have Traveld: ";
        cin>>km;
        cout<<"Enter Traveing Time: ";
        cin>>hr;
    }
    void show()
    {
        cout<<"You Travel: "<<km<<" km"<<endl;
        cout<<"Your Time: "<<hr<<" hr"<<endl;
    }
    
    void add(Travel p2)
    {
        Travel total;
        total.km=km+p2.km;
        total.hr=hr+p2.hr;
        cout<<"Total Distance and time: "<<endl;
        total.show();
    }
};
int main()
{
    Travel p1,p2;
    cout<<"Data of first Person: "<<endl;
    p1.get();
    cout<<"Data of Second Person: "<<endl;
    p2.get();
    p1.add(p2);
    return 0;
}