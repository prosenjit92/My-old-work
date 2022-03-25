#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double cgpa;

    void display()
    {
        cout << "ID is : "<<id<<" CGPA  :"<<cgpa <<endl;

    }
    student(int x,double y)
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

    student s1(a,b);
    s1.display();

    int c;
    cout<< "Input c : ";
    cin>>c;

    double d;
    cout<< "Input d : ";
    cin>>d;

    student s2(c,d);
    s2.display();


    return 0;
}
