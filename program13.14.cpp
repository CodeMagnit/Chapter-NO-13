/* Write a Class Travel that has the attributes kilometers and hours. A constructor with no perameter initialize both data members to 0. A memeber function get() inputs the values and function show() displays the values. It has a member function add() that takes an object of type Travel, adds the kilometers and hours of calling object and the parameter and returns an object with added values.*/
#include<iostream>
using namespace std;
class Travel
{
    private:
    int km, hr;
    public:
    Travel()
    {
        km=hr=0;
    }
    void get()
    {
        cout<<"Enter Distance in Km: ";
        cin>>km;
        cout<<"Enter Time in Hr: ";
        cin>>hr;
    }
    Travel add(Travel p2)
    {
        Travel temp;
        temp.km=km+p2.km;
        temp.hr=hr+p2.hr;
        return temp;
    }
    void show()
    {
        cout<<"You have traveled "<<km<<" km in "<<hr<<" hr"<<endl;
    }

};
int main()
{
    Travel p1,p2,total;
    p1.get();
    p2.get();
    cout<<"Total "<<endl;
    total=p1.add(p2);
    total.show();
    return 0;
}