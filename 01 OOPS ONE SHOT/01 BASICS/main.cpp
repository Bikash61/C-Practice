#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;
    string subject;
    int salary;

    // Methods/ Member Functions

    void ChangeDept(string newDept)
    {
        dept = newDept;
    }
};

int main()
{

    Teacher t1;
    t1.name = "Bikash Bashyal";
    t1.dept = "Computer Science";
    t1.subject = "DSA";
    t1.salary = 50000;

    cout << t1.name << endl;

    return 0;
}