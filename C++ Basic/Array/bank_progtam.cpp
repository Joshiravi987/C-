#include<iostream>
using namespace std;
int main(){
    int bank_arr[5];
    int count =0;
    int balance,withdraw ,deposite,choice,account_no;
do{
    cout<<"enter choice";
    cin>>choice;
    switch (choice)
    {
    cout<<"1:add account no";
    cout<<"2:add balance";
    cout<<"3:enter withdraw amount";
    cout<<"4:enter deposit amount";
    cout<<"5:show balance";
    case 1:
    if (count<5)
    {
        cout<<"add acc no";
        cin>>account_no;
        bank_arr[count]=account_no;
        count++;
    }
    else{
        cout<<"array is full";
    }
    break;
    case 2:
    cout<<"add balance";
    cin>>balance;
    break;
    case 3:
    cout<<"enter withdraw amount";
    cin>>withdraw;
    balance=balance-withdraw;
    break;
    case 4:
    cout <<" enter deposite amount";
    cin>>deposite;
    balance=balance+withdraw;
    break;
    case 5:
    for(int i=0 ; i < count; i++){
        cout<<bank_arr[i]<<endl;
cout<<"total balance  "  <<endl<<balance<<endl;
    }
    break;
    case 6:
    exit(1);
    default:
    break;
    }
}
while (choice = 7);
}