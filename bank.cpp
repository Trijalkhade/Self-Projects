#include<iostream>
using namespace std;
class customer
{
  public:
  string customer_id,customer_name;
  int customer_DOB;
  float bank_balance = 4900.50;
  
  void customer_info()
  {
    cout<<"Enter your name:"<<endl;
    cin>>customer_name;
    cout<<"Enter your Bank ID:"<<endl;
    cin>>customer_id;
    cout<<"Enter your Date Of Birth (ddmmyyyy):"<<endl;
    cin>>customer_DOB;
    if (customer_name[0] < 99 || customer_DOB<10000000)
    {
      cout<<"Invalid date of birth";
      customer a1;
      a1.customer_info();
    }
  }
  
  void balance()
  {
    cout<<"Your bank balance: \n"<< bank_balance<<endl ;
  }
  
  void withdraw(int a)
  {
    if (a<=bank_balance)
    {
      bank_balance = bank_balance - a;
      cout<<"\nName:"<<customer_name;
      cout<<"\nId: "<<customer_id;
      cout<<"\nyour bank balance is:"<<bank_balance<<endl;
    }
    else 
    {
      cout<<"Balance insufficient"<<endl;
    }
  }
  
  void deposit(int a)
  {
      bank_balance = bank_balance + a;
      cout<<"\nName:"<<customer_name;
      cout<<"\nId: "<<customer_id;
      cout<<"\nyour bank balance is:"<<bank_balance<<endl;
  }
};
  int main()
  {
    float money;
    string method;
    char end,null;
    customer a1;
    do{
      cout<<endl<<"Type one of the given command below:"<<endl;
      cout<<"info"<<endl;
      cout<<"balance"<<endl;
      cout<<"withdraw"<<endl;
      cout<<"deposit"<<endl;
      cout<<"Enter method:";
      cin>>method;
      if(method == "info")
      {
        a1.customer_info();
      }
      else if(method == "balance")
      {
        a1.balance();
      }
      else if(method == "withdraw")
      {
        cout<<"\nEnter amount:\n";
        cin>>money;
        a1.withdraw(money);
      }
      else if(method == "deposit")
      {
        cout<<"\nEnter amount:\n";
        cin>>money;
        a1.deposit(money);
      }
      else
      {
        cout<<"Enter valid commmand";
      }
      cout<<"Do you want to continue (y/n):";
      cin>>end;
     
    }
    while(end == 'y' || end == 'Y');
    
    return 0;
  }
