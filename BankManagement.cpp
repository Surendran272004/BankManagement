#include<iostream>
#include<string>
class BankAccount {
private:
std::string AccountHolderName;
int AccountNumber;
double Balance;

public:
BankAccount(std::string AccountHolderName, int AccountNumber,double Balance){
  setName(AccountHolderName);
  setNumber(AccountNumber);
  setBala(Balance);
}
void setName(std::string AccountHolderName){
  if(AccountHolderName.length()>0){
    this->AccountHolderName = AccountHolderName;
  }
  else{
    this->AccountHolderName = "Unknown";
  }
}
void setNumber(int AccountNumber){
  if(AccountNumber!=0){
    this->AccountNumber = AccountNumber;
  }
  else{
    this->AccountNumber =0;
  }
}
void setBala(double Balance){
  if(Balance>0){
    this->Balance = Balance;
  }
  else{
    this->Balance = 0;
  }
}
void deposite(double amount){
  if(amount > 0){
    Balance+=amount;
    std::cout<<"TOTAL BALANCE AFTER DEPOSITE: "<<Balance<<std::endl;
  }
  else{
    std::cout<<"Invalid Amount"<<std::endl;
  }
}
void withdraw(double amount){
  if(amount<=Balance && amount>0){
    Balance-=amount;
    std::cout<<"TOTAL BALANCE AFTER WITHDRAW: "<<Balance<<std::endl;
  }
  else{
    std::cout<<"Invalid Amount"<<std::endl;
  }
}
std::string getName(){
  return AccountHolderName;
}
int getNumber(){
  return AccountNumber;
}
double getBala(){
  return Balance;
}
void display(){
  std::cout<<std::endl;
  std::cout<<"**********ACCOUNT DETAILS**********\n";
  std::cout<<"Name: "<<AccountHolderName<<std::endl;
  std::cout<<"AccountNumber: "<<AccountNumber<<std::endl;
  std::cout<<"Balance: "<<Balance<<std::endl;
  std::cout<<"***********************************\n";
  std::cout<<std::endl;
}
};
int main(){
  BankAccount BA("Surendran M",1234,50000.00);
  BA.display();
  BA.deposite(30000.00);
  BA.withdraw(20000.00);
  BA.display();
  
}
