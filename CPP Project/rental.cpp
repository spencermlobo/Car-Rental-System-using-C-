#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip> 
using namespace std;
class customer 
{
	private:
	public:
	string name;
    string model;
    string number;
    char data;
};
class rent : public customer
{
	public:
	int days=0,fee=0;
	void data()
	{
		int login();
	login();
	cout << "Pease Enter your Name: ";
    cin >> name;
    cout<<endl;
    do
    {
        cout<<"Please Select a Car Modal"<<endl;
        cout<<"Enter '1' for Tata Nexon 2016."<<endl;
        cout<<"Enter '2' for Hyundai 2019."<<endl;
        cout<<"Enter '3' for Datsun 2017."<<endl;
        cout<<endl;
        cout<<"Choose a Car from the above options: ";
        cin >>model;
        cout<<endl;
  if(model=="1")
 {
 	system("CLS");
 
		cout<<"You have choosed Tata Nexon "<<endl;
		 ifstream inA("Tata_Nexon.txt");
         char str[200];
         while(inA) {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(model=="2")
  {
  	system("CLS");
  
		cout<<"You have choosed Hyundai "<<endl;
		 ifstream inB("Hyundai.txt");
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;
         
     }
     sleep(2);
 }
 if(model=="3")
 {
 	system("CLS");
	     cout<<"You have choosed Datsun "<<endl;
		 ifstream inC("Datsun.txt");
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     }
     sleep(2);
}  
if(model !="1" && model !="2" &&  model !="3" )
     
      cout<<"Please try again.......You have selected an invalid option............"<<endl;
        }
    while(model !="1" && model !="2" &&  model !="3" );
        cout << "Please Specify: "<<endl; 
    cout<<"Car Number: ";
    cin >> number;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculation()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent....... Please wait for a moment......"<<endl;
		sleep(2);
		if(model == "1"||model=="a")
        fee=days*1300;
        if(model == "2" ||model=="b")
        fee=days*900;
        if(model == "3" ||model=="c")
        fee=days*500;
  }
void reciept()
    {
    cout << "Car Rental - Customer Reciept"<<endl;
    cout << " Reciept No. :           "<<setw(5)<<"#SDT0602"<<endl;
    cout << " Customer Name:          "<<setw(5)<<name<<endl;
    cout << " Car Model :             "<<setw(5)<<model<<endl;
    cout << " Car No. :               "<<setw(5)<<number<<endl;
    cout << " Number of days :        "<<setw(5)<<days<<endl;
    cout << " Your Rental Amount is : "<<setw(5)<<fee<<endl;
    cout << " ___________________xxx_______________________"<<endl;
    cout <<"\n";
    
    cout << "Total Rental Amount is : "<<setw(5)<<fee<<endl;
    
    cout << "This is a computer generated reciept"<<endl;
    
    cout << "Please pay the amount before due date. Otherwise penelty fee will be applied"<<endl;
     int f;
    system("PAUSE");
    
    system ("CLS");
    
     ifstream inf("thankyou.txt");

  
  char str[300];

  while(inf) 
  {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};


int main()
{

rent obj; 
obj.data();
obj.calculation();
obj.reciept();

return 0;
};

int login()
{
   
   //char ch;
   string userinput;
   cout<<"CAR RENTAL SYSTEM \n";
   cout<<"---LOGIN--- \n";	
   cout << "Please Enter your Password: ";
   cin>>userinput;
   {
      if(userinput == "password")
   {
      cout << "\n Access Granted! \n";
      system("PAUSE");
      system ("CLS");
   }
   else
   {
      cout << "\nWrong Password...Please Try Again\n";
      system("PAUSE");
      system("CLS");
      login();
   }
   }
   return 0;
}

