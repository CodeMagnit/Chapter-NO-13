/*Write a Class TV that contains the attributes Brand Name, Model and Retail Price. Write a method to display all attributes and a method to change the attributes. Also write a constructor to initialize all the attribures.*/
#include<iostream>
using namespace std;
class TV
{
    private:
    string brand_name, Model;
    float price;
    public:
    TV()
    {
        brand_name="";
        Model="";
        price=0;
    }
    void input()
    {
        cout<<"Enter Brand Name: ";
        getline(cin,brand_name);
        cout<<"Enter Model: ";
        getline(cin,Model);
        cout<<"Enter Price: ";
        cin>>price;
    }
    void show()
    {
        cout<<"Brand Name: "<<brand_name<<endl;
        cout<<"Model: "<<Model<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void update(string bn, string mdl, float pr)
    {
        brand_name=bn;
        Model=mdl;
        price=pr;

    }
};
int main()
{
    string bn,mdl;
    float pr;
    TV one;
    one.input();
    cout<<"Data Before Updating"<<endl;
    one.show();
    cin.ignore();
    cout<<"Enter Brand Name: ";
        getline(cin,bn);
        cout<<"Enter Model: ";
        getline(cin,mdl);
        cout<<"Enter Price: ";
        cin>>pr;
    cout<<"Data After Updating"<<endl;
    one.update(bn,mdl,pr);
    return 0;
}