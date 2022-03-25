#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double cgpa;

    void display()
    {
        cout << "ID is : "<<id<<" CGPA  :"<<cgpa ;

    }
    void setValue(int x,double y)
    {
        id = x;
        cgpa = y;
    }

};

int main()
{
    int a;
    cout<< "Input a : ";
    cin>>a;

    double b;
    cout<< "Input b : ";
    cin>>b;

    cout<<endl;

    student s1;
    s1.setValue(a,b);
    s1.display();


    return 0;
}

