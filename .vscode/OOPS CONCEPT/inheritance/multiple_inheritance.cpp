#include <iostream>
using namespace std;
class person {
public:
person (){
    cout<<"person claas constructuor"<<endl;
}
void demo(){
    cout<<"person class method"<<endl;
}
    
};
class child{
    public :
    child(){
        cout<<"child class constructor"<<endl;
    }
    void demo1(){
        cout<<"child class metod "<<endl;
    }
};
class student : public person ,public  child{
    public :
    student(){
        cout<<"student class constructor"<<endl;
    }
    void demo2(){
        cout<<"student class method"<<endl;
    }
};
int main(){
    student s;

}