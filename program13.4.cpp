/*Write a Class Book with three data members BookID, Pages and Price. It also contain the following memebers function:
The get() function is used to input Values
The show() Function is used to display Values
The set() Function is used to set the Values of data members using parameters
The getPrice() Function is used to return the value of price

The program should create two objects of the class and input values for these objects. The program diplayy the details of the most costl book.
*/

#include<iostream>
using namespace std;
// Class
class Book
{
    private:
    int BookID,pages;
    float price;
    public:
    void get()
    {
        cout<<"Enter BOOkID: ";
        cin>>BookID;
        cout<<"Enter Pages: ";
        cin>>pages;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void show()
    {
        cout<<"Book ID: "<<BookID<<endl;
        cout<<"Pages: "<<pages<<endl;
        cout<<"Price: "<<price<<endl;

    }
    void set(int id, int pg, float pri)
    {
        BookID=id;
        pages=pg;
        price=pri;
    }
    float get_price()
    {
        return price;
    }
};
// Main Function
int main()
{
    int id,pg;
    float pri;
    Book b1,b2;
    b1.get();
    cout<<"Enter BOOkID: ";
    cin>>id;
    cout<<"Enter Pages: ";
    cin>>pg;
    cout<<"Enter Price: ";
    cin>>pri;
    b2.set(id,pg,pri);
    cout<<"The Detail of Most Costly Book is: "<<endl;
    if(b1.get_price()>b2.get_price())
    b1.show();
    else
    b2.show();

    return 0;
}