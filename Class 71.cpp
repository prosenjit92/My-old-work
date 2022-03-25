#include<iostream>
using namespace std;
class Student
{
public:
    int id;
    float cgpa;

    Student(int x, float y )
    {
        id = x;
        cgpa= y;
    }

    void display ()
    {
        cout<<"ID : " <<id << " CGPA : " <<cgpa;

    }

};

int main()
{
    Student s(4 , 5.00);
    s.display();

    return 0;
}
