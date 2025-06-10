#include<iostream>
using namespace std;
class person
{
    public:
    virtual void test(){
        cout<< "parent class method" <<endl;
    }
    void test (int a){
        cout<<"parent class a var"<<a<<endl;
    }
};
class student: public person{
    public :
    void test() override{
        cout<<"child class method"<<endl;
    }
    void test(int a){
        cout<<"child class a var"<<a<<endl;
    }
};

class grandchild : public student {
    public :
    void test() override{
        cout<<"grandchild class method"<<endl;
    }
    void test(int a){
        cout<<"grandchild class a var"<<a<<endl;
    }
};

int main(){
    student s;
    person p;
    grandchild g;
    p.test();
    p.test(10);
    s.test();
    s.test(50);
    g.test();
    g.test(100);
}