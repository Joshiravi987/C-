// multilevel inheritance
#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int roll_no[5];
    student()
    {
        cout << "Enter roll numbers of 5 students: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> roll_no[i];
        }
    }
    void student_display()
    {
        cout << "Roll numbers of students are: ";
        for (int i = 0; i < 5; i++)
        {
            cout << roll_no[i] << " ";
        }
        cout << endl;
    }
};
class student_info : student
{
public:
    string name[5];
    student_info()
    {
        cout << "Enter names of 5 students: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> name[i];
        }
    }
    void student_info_display()
    {
        // parent class method call
        student_display();
        cout << "Names of students are: ";
        for (int i = 0; i < 5; i++)
        {
            cout << name[i] << " ";
        }
        cout << endl;
    }
};
class student_marks : public student_info
{
public:
    int marks[5];
    student_marks()
    {
        cout << "Enter marks of 5 students: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void student_marks_display()
    {
        // child class method call
        student_info_display();
        cout << "Marks of students are: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};
class student_subjects : public student_marks
{
public:
    string subjects[5];
    student_subjects()
    {
        cout << "Enter subjects of 5 students: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> subjects[i];
        }
    }
    void student_subjects_display()
    {
        cout << "Subjects of students are: ";
        //
        student_marks_display();
        for (int i = 0; i < 5; i++)
        {
            cout << subjects[i] << endl;
        }
    }
};
int main()
{
    student_subjects ss;
    ss.student_subjects_display();
}