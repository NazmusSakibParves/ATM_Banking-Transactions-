#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<math.h>
#include<conio.h>
using namespace std;
class ATM_BANK
{


public:
        double Amount=500000.00;
        double withdro;
	    double total;
	    double deposit;
	    double ac;
     ATM_BANK()
    {
        cout<<"       **====================================**"<<endl;
        cout<<"          Wellcome To Our ATM-BANK Operation  "<<'\n';
        cout<<"       **====================================**"<<endl;
    }
    ~ATM_BANK()
    {
        cout<<" \tThank You. "<<endl;
    }


    void ATM_BANK_Services()
	{
		string p[500];
		fstream file1;
		file1.open("about atm-bank.txt");
		if (file1.fail())
		{
			cerr<<"  Error !"<<endl;
		}
		int count=0,i;
		while(!file1.eof())
		{
			file1>>p[count];
			count++;
		}
		for(i=0;i<count;i++)
		{cout<<p[i]<<" ";}
		file1.close();

	{

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }


    void My_Information()
    {
        char name[20];
        //double Amount=500000;
        system ("CLS");
        cout<<" Please enter your last name:";
        cin>>name;
        cout<<name<<endl;
       // cout<<" Your current amount is tk:" <<Amount<<endl;
         string A[500];
		fstream file2;
		file2.open("information.txt");
		if (file2.fail())
		{
			cerr<<"   Error ! "<<endl;
		}
		int count=0,i;
		while(!file2.eof())
		{
			file2>>A[count];
			count++;
		}
		for(i=0;i<count;i++)
		{cout<<A[i]<<" ";}
		file2.close();
		cout<<endl<<endl;

      {

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }

    void My_Balance()
    {
        //double Amount=500000;
        cout<<"  Your total balance is tk: "<<Amount<<endl;
        cout<<" Thank you for using our ATM_Bank "<<endl<<endl;

       {

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }

   void Deposit_Money()
    {
        double total_money;
        double Rs=1000.00;
      cout<<" Please enter your money here "<<endl;
      cin>>deposit;
      total_money=Amount+deposit;
      if(deposit>=Rs)
      {
          cout<<" You are successfully done this operation"<<endl;
          cout<< "Now your current balance is tk." <<total_money<<endl;cout<<"Thank you"<<endl;


      }
      else
{
  cout<<" You are fail in this operation\n You can not Deposit money less than tk.1000\n please try again "<<endl;
           cout<<"Your Account balance is tk."<<Amount<<endl;


}

 {

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }
    void Bill_payment();
    void About();
    void AccountExit();
    void Again();
    void withdrow()
    {
	    //double withdro;
	    //double total;
	    double dpo=500.00;
	    ac=(Amount-500);

	    cout<<"Your total balance is tk. "<<Amount<<endl;
	    cout<< "Please enter your amount which you want" <<endl;
	    cin>>withdro;
	    if(Amount<withdro)
        {
            cout<<"You have not enough money to withdro\n Thank you for using our network "<<endl;

        }
        else if(withdro<dpo)
        {
           cout<<" Operation Fail !\n You can not withdrow money less than 500.00 tk\n Please try again\n Thank you for using our network "<<endl;
        }
        else if(withdro==Amount)
        {
            total=((Amount-withdro)+500);
            cout<<" You can not empty your Account.\n You can withdro tk."<<ac<<endl;
            cout<<" You have withdrawn tk."<<ac<<endl;
            cout<<" Now your Account balance is tk."<<total<<endl;
            cout<<" Thank you "<<endl<<endl;
        }

        else
        {
          total=Amount-withdro;
        cout<< "You have withdrawn tk. " <<withdro<<endl;
        cout<< "Now your Account balance is tk. "<<total<<endl;cout<<" Thank you"<<endl;
        }

    {

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }


};
void ATM_BANK::Bill_payment()
{
        double B_payment;
        system ("CLS");
        cout<<" Your total balance is tk. "<<Amount<<endl<<endl;
        cout<<" Please enter your payment amount here:"<<endl;
        cin>>B_payment;
        double current_Amount;
        if(Amount<B_payment)
        {
            cout<<" SORRY !\n You have not enough money to paid this bill "<<endl;
        }
        else
        {
          current_Amount=Amount-B_payment;
        cout<<" You are successfully done.\n Your Bill is Paid.\n Now your Account balance is tk."<<current_Amount<<endl;
        }


    {

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }

    void ATM_BANK::About()
{


		string p[500];
		fstream file3;
		file3.open("ABOUT.txt");
		if (file3.fail())
		{
			cerr<<"  Error !"<<endl;
		}
		int count=0,i;
		while(!file3.eof())
		{
			file3>>p[count];
			count++;
		}
		for(i=0;i<count;i++)
		{cout<<p[i]<<" ";}
		file3.close();
	{

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }

        void ATM_BANK::AccountExit()
    {
        cout<<"Thank you for banking with us."<<endl;
    }

     void ATM_BANK::Again()
     {
         int opp;
	    cout<<"                          ATM_BANK Menu:    "<<endl;
	    cout<<"                         *==============*     "<<endl;
	    cout<<"      Please Select any one given below:"    <<endl<<endl;
		cout<<"       1.ATM_BANK Services               2.Account Holder's Information"<<endl;
		cout<<"       3.Balance Inquiry                 4.Money Withdrawl "<<endl;
		cout<<"       5.Money Deposit                   6.Electric Bill Payment "<<endl;
		cout<<"       7.About                           8.Exit  "<<endl;

		cin>>opp;
		system("CLS");
		switch(opp)
		{
		    case 1:

		           ATM_BANK_Services();
		           break;



            case 2:

                    My_Information();
                    break;

            case 3:

                    My_Balance();
                    break;

            case 4:

                   withdrow();
                    break;

            case 5:

                    Deposit_Money();
                    break;

            case 6:

                    Bill_payment();
                    break;

            case 7:

                    About();
                    break;

            case 8:

                    AccountExit();
                    break;

            default:

                        cout<<"Please Enter the Correct Number Choice"<<endl;


           }


	}

class Money_withdrawl:public ATM_BANK
{
    public:
     void withdrow()
	{
	    //double withdro;
	    //double total;
	    double dpo=500.00;
	    ac=(Amount-500);

	    cout<<"Your total balance is tk. "<<Amount<<endl;
	    cout<< "Please enter your amount which you want" <<endl;
	    cin>>withdro;
	    if(Amount<withdro)
        {
            cout<<"You have not enough money to withdro\n Thank you for using our network "<<endl;

        }
        else if(withdro<dpo)
        {
           cout<<" Operation Fail !\n You can not withdrow money less than 500.00 tk\n Please try again\n Thank you for using our network "<<endl;
        }
        else if(withdro==Amount)
        {
            total=((Amount-withdro)+500);
            cout<<" You can not empty your Account.\n You can withdro tk."<<ac<<endl;
            cout<<" You have withdrawn tk."<<ac<<endl;
            cout<<" Now your Account balance is tk."<<total<<endl;
            cout<<" Thank you "<<endl<<endl;
        }

        else
        {
          total=Amount-withdro;
        cout<< "You have withdrawn tk. " <<withdro<<endl;
        cout<< "Now your Account balance is tk. "<<total<<endl;cout<<" Thank you"<<endl;
        }

    {

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }


};
class B_Inquiry:public ATM_BANK
{
public:
    void My_Balance()
    {

        cout<<"  Your total balance is tk: "<<Amount<<endl;
        cout<<" Thank you for using our ATM_Bank "<<endl<<endl;

       {

        cout<<"\n \n \n \n \n \t \t \t 1.Back Again. \n \t \t \t 2.Exit. \n \n \n \n ";

             int q;
       cin>>q;
       system("cls");
       switch (q)
             {
                case 1:
                   return Again();
                case 2:
                   exit(2);
                break;
              }

        }

    }


};


int main()
{

    ATM_BANK BK;
    int Option;
    string pass;
    cout<<"Please Enter your Password Here:";
    cin>>pass;
    system("CLS");


    if(pass=="AIUB")
	{
	    cout<<"                          ATM_BANK Menu:    "<<endl;
	    cout<<"                        *================*     "<<endl;
	    cout<<"        Select any one given below:"<<endl<<endl;
		cout<<"        1.ATM_BANK Services            2.Account Holder's Information  "<<endl;
		cout<<"        3.Balance Inquiry              4.Money Withdrawl           "<<endl;
		cout<<"        5.Money Deposit                6.Electric Bill Payment"<<endl;
		cout<<"        7.About                        8.Exit"<<endl;
        cin>>Option;
		system("CLS");
		switch(Option)
		{
		    case 1:

		          BK.ATM_BANK_Services();
		     break;

		    case 2:

                    BK.My_Information();
                    break;

            case 3:

                    BK.My_Balance();
                    break;

            case 4:

                    BK.withdrow();
                    break;

            case 5:

                    BK.Deposit_Money();
                    break;

            case 6:

                    BK.Bill_payment();
                    break;

            case 7:

                    BK.About();
                    break;

            case 8:

                    BK.AccountExit();
                    break;

            default:

                        cout<<"Please Enter the Correct Number Choice"<<endl;


           }


	}
	if(pass!="AIUB")
        cout<<"\t\tSorry!!!\n\t\tYour Password is incorrect."<<endl;



    return 0;
}

