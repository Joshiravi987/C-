// multilevel inheritance
#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int roll_no[5];
    student() {
        cout << "Enter roll numbers of 5 students: ";
        for
        (int i = 0; i < 5; i++) {
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
class student_info : public student
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

        for (int i = 0; i < 5; i++)
        {
            cout << subjects[i] << endl;
        }
    
    }
    };
    class Result : public student_subjects
    {
        public :
        int total;
        double ave;
        Result() : total(0), ave(0.0)
        {
             for (int i = 0; i < 5; i++)
            {
                total += marks[i];
            }
            ave = total / 5.0;
        }
            void display_result()
            {
                cout << "Total marks: " << total << endl;
                cout << "Average marks: " << ave << endl;
            }
        };
            
int main()
{
    Result ss;
    ss.student_display();
    ss.student_info_display();
    ss.student_marks_display();
    ss.student_subjects_display();
    ss.display_result();
    return 0;
}