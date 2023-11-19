/*write a class Array that contains an array of integers to store five values. It also contains the following member function defined outside the class

The fill() function is used to fill the array with value from the user.
The display() function is used to display the values of array.
The max() function show the maximum value of Array
The min() function show the minimum value of Array
*/

#include<iostream>
using namespace std;
class Array
{
    private:
    int n[5],i;
    public:
    void fill();
    void display();
    void max();
    void min();
};
void Array::fill()
{
    for(i=0; i<5; i++)
    {
        cout<<"Enter "<<i+1<<" Number: ";
        cin>>n[i];
    }
}
void Array::display()
{
     for(i=0; i<5; i++)
    {
        cout<<i+1<<" Number is = ";
        cout<<n[i]<<endl;
    }
}
void Array::max()
{
    int max=0;
     for(i=0; i<5; i++)
    {
        if(max<n[i])
        max=n[i];
    }
    cout<<"Maximum Number is = "<<max<<endl;
}
void Array::min()
{
    int min=0;
     for(i=0; i<5; i++)
    {
        if(min>n[i])
        min=n[i];
    }
    cout<<"Mniimum Number is = "<<min<<endl;
}
int main()
{
    Array a;
    a.fill();
    a.display();
    a.max();
    a.min();
    return 0;
}
