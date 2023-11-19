/*Write a Class Book that has the attributes pages, price and title. It has two functions to input the value and display the values. Create three objects of the class and input values.*/
#include<iostream>
using namespace std;
class Book
{
    private:
    string title;
    int pages;
    float price;
    public:
    void input()
    {
        cout<<"Enter Title: ";
        getline(cin,title);
        cout<<"Enter Pages: ";
        cin>>pages;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void show()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Pages: "<<pages<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
int main()
{
    Book b1,b2,b3;
    cout<<"Detail of b1: "<<endl;
    b1.input();
    b1.show();

    cout<<"Detail of b2:"<<endl;
    b2=b1;
    b2.show();
    
    cout<<"Detail of b3:"<<endl;
    b3=b1;
    b3.show();
    return 0;
}
// note default copy constructor Version depends upon c++ version