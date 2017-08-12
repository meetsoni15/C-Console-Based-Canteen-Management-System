#include<iostream>
#include<iomanip>
#include<string.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

class customer
{
	int c_id;
	char c_name[30];
	int c_age;
	char c_gender[7];
	char c_city[30];
	long int c_mob_no;
	public: void getdata();
		void putdata();
		void o_cust_add();
		void o_cust_show_full();
		void o_cust_delete();
		void o_cust_search();
		void o_cust_update();
};

void customer :: getdata()
{
	cout<<endl<<"Enter Customer's id: ";
	cin>>c_id;
	cout<<"Enter Customer's name: ";
	cin>>c_name;
	cout<<"Enter Customer's age: ";
	cin>>c_age;
	cout<<"Enter Customer's gender: ";
	cin>>c_gender;
	cout<<"Enter Customer's city: ";
	cin>>c_city;
	cout<<"Enter Customer's contact no.: ";
	cin>>c_mob_no;
}

void customer :: putdata()
{
	cout<<endl<<"Customer's id is "<<c_id;
	cout<<endl<<"Customer's name is "<<c_name;
	cout<<endl<<"Customer's age is "<<c_age;
	cout<<endl<<"Customer's gender is "<<c_gender;
	cout<<endl<<"Customer's city is "<<c_city;
	cout<<endl<<"Customer's contact no is "<<c_mob_no;
}

class supplier
{
        int s_id;
        char s_name[30];
        int s_age;
        char s_gender[7];
        char s_city[30];
        long int s_mob_no;
        public: void getdata();
                void putdata();
                void o_supp_add();
		void o_supp_show_full();
		void o_supp_delete();
		void o_supp_search();
		void o_supp_update();
};

void supplier :: getdata()
{
        cout<<endl<<"Enter Supplier's id: ";
        cin>>s_id;
        cout<<"Enter Supplier's name: ";
        cin>>s_name;
        cout<<"Enter Supplier's age: ";
        cin>>s_age;
        cout<<"Enter Supplier's gender: ";
        cin>>s_gender;
        cout<<"Enter Supplier's city: ";
        cin>>s_city;
        cout<<"Enter Supplier's contact no.: ";
	cin>>s_mob_no;
}

void supplier :: putdata()
{
        cout<<endl<<"Supplier's id is "<<s_id;
        cout<<endl<<"Supplier's name is "<<s_name;
        cout<<endl<<"Supplier's age is "<<s_age;
        cout<<endl<<"Supplier's gender is "<<s_gender;
        cout<<endl<<"Supplier's city is "<<s_city;
        cout<<endl<<"Supplier's contact no is "<<s_mob_no;
}
	
class bill
{
        int b_id;
        char b_name[30];
        char b_city[30];
        long int b_mob_no;
        char b_date[10];
	long int b_total_amt;
	public: void getdata();
                void putdata();
                void o_bill_add();
		void o_bill_show_full();
		void o_bill_delete();
		void o_bill_search();
		void o_bill_update();
};

void bill :: getdata()
{
        cout<<endl<<"Enter Bill's id: ";
        cin>>b_id;
        cout<<"Enter Bill's name: ";
        cin>>b_name;
        cout<<"Enter Bill owner's city: ";
        cin>>b_city;
        cout<<"Enter Bill owner's contact no.: ";
        cin>>b_mob_no;
	cout<<"Enter date of Bill creation: ";
	cin>>b_date;
	cout<<"Enter total amount: ";
	cin>>b_total_amt;
}

void bill :: putdata()
{
        cout<<endl<<"Bill's id is "<<b_id;
        cout<<endl<<"Bill's name is "<<b_name;
        cout<<endl<<"Bill owner's city is "<<b_city;
        cout<<endl<<"Bill owner's contact no. is "<<b_mob_no;
        cout<<endl<<"Bill's Date of creation is "<<b_date;
	cout<<endl<<"Bill's Total amount is "<<b_total_amt;
}

class catalogue
{
        int p_id;
        char p_name[30];
        long int p_price;
        public: void getdata();
                void putdata();
                void o_cat_add();
		void o_cat_show_full();
		void o_cat_delete();
		void o_cat_search();
		void o_cat_update();
};

void catalogue :: getdata()
{
        cout<<endl<<"Enter Product's id: ";
        cin>>p_id;
        cout<<"Enter Product's name: ";
	cin>>p_name;
        cout<<"Enter Product's price: ";
        cin>>p_price;
}

void catalogue :: putdata()
{
        cout<<endl<<"Product's id is "<<p_id;
        cout<<endl<<"Product's name is "<<p_name;
        cout<<endl<<"Product's price is "<<p_price;
}

class shopping_cart
{
        public: //void getdata();
                //void putdata();
                void c_sc_add();
                void c_sc_show_full();
                void c_sc_delete();
                //void c_sc_search();
};

/*void shopping_cart :: getdata()
{
        cout<<endl<<"Enter Product's id: ";
        cin>>sc_id;
        cout<<"Enter Product's name: ";
        cin>>sc_name;
        cout<<"Enter Product's price: ";
        cin>>sc_price;
}

void shopping_cart :: putdata()
{
        cout<<endl<<"Product's id is "<<sc_id;
        cout<<endl<<"Product's name is "<<sc_name;
        cout<<endl<<"Product's price is "<<sc_price;
}*/




void start_screen();
void owner_menu();
void customer_menu();
void default_msg_for_switch();
void o_cust_menu();
void o_supp_menu();
void o_bill_menu();
void o_catalogue();


int owner_authen()
{
	char o_username[20],o_password[20];
	char o_user[20]="me1511",o_pass[20]="me1511";
	cout<<endl<<endl;
	cout.width(25);
	cout<<"Enter Owner's";
	cout<<endl<<setw(34)<<"username: ";
	cin>>o_username;
	cout<<setw(34)<<"password: ";
	cin>>o_password;
	if(strcmp(o_username, o_user)==0 && strcmp(o_password, o_pass)==0)
		return 1;
	else
		return 0;
}

void default_msg_for_switch()
{
	cout<<"Invalid Choice!!";
}

void customer :: o_cust_search()
{
	const int N=200;
        char line[N];
	cout<<endl<<endl<<"Welcome Sir to the world's fastest Search Section...	!!";
	cout<<endl<<"Enter customer id, of which you want to get details: ";
	int id_se,x;
	cin>>id_se;
	ifstream fin1("customer");
	while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j==id_se)
                {
			cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<setw(55)<<"Search SUCCESSFULL";
			cout<<endl<<endl<<endl<<setw(60)<<"********CANTEEN MANAGEMENT SYSTEM********";
		        cout<<endl<<setw(54)<<"CUSTOMER DATABASE";
		        cout<<endl<<endl<<setw(5)<<"ID"<<setw(16)<<"NAME"<<setw(15)<<"AGE"<<setw(16)<<"GENDER"<<setw(20)<<"CITY"<<setw(18)<<"CONTACT";
			cout<<endl<<endl<<line<<endl;
                        x=1;
                }
        }
	fin1.close();
	if(x!=1)
		cout<<endl<<endl<<"Sorry Sir... But Unfortunately, you had entered customer id that is not listed!!!";
}
	
void supplier :: o_supp_search()
{
        const int N=200;
        char line[N];
        cout<<endl<<endl<<"Welcome Sir to the world's fastest Search Section... !!";
        cout<<endl<<"Enter supplier's id, of which you want to get details: ";
        int id_se,x;
        cin>>id_se;
        ifstream fin1("supplier");
        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j==id_se)
                {
                        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<setw(55)<<"Search SUCCESSFULL";
                        cout<<endl<<endl<<endl<<setw(60)<<"********COMPUTER SHOP********";
                        cout<<endl<<setw(54)<<"SUPPLIER DATABASE";
                        cout<<endl<<endl<<setw(5)<<"ID"<<setw(16)<<"NAME"<<setw(15)<<"AGE"<<setw(16)<<"GENDER"<<setw(20)<<"CITY"<<setw(18)<<"CONTACT";
                        cout<<endl<<endl<<line<<endl;
                        x=1;
                }
        }
        fin1.close();
        if(x!=1)
                cout<<endl<<endl<<"Sorry Sir... But Unfortunately, you had entered supplier id that is not listed!!!";
}

void bill :: o_bill_search()
{
        const int N=200;
        char line[N];
        cout<<endl<<endl<<"Welcome Sir to the world's fastest Search Section... !!";
        cout<<endl<<"Enter bill's id, of which you want to get details: ";
        int id_se,x;
        cin>>id_se;
        ifstream fin1("bill");
        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j==id_se)
                {
                        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<setw(55)<<"Search SUCCESSFULL";
                        cout<<endl<<endl<<endl<<setw(60)<<"********COMPUTER SHOP********";
                        cout<<endl<<setw(50)<<"BILL DATABASE";
                        cout<<endl<<endl<<setw(5)<<"ID"<<setw(16)<<"NAME"<<setw(18)<<"CITY"<<setw(16)<<"CONTACT NO."<<setw(13)<<"DATE"<<setw(28)<<"TOTAL AMOUNT";
                        cout<<endl<<endl<<line<<endl;
                        x=1;
                }
        }
        fin1.close();
        if(x!=1)
                cout<<endl<<endl<<"Sorry Sir... But Unfortunately, you had entered bill id that is not listed!!!";
}
	
void catalogue :: o_cat_search()
{
        const int N=200;
        char line[N];
        cout<<endl<<endl<<"Welcome Sir to the world's fastest Search Section... !!";
        cout<<endl<<"Enter product's id, of which you want to get details: ";
        int id_se,x;
        cin>>id_se;
        ifstream fin1("catalogue");
        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j==id_se)
                {
                        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<setw(55)<<"Search SUCCESSFULL";
                        cout<<endl<<endl<<endl<<setw(60)<<"********COMPUTER SHOP********";
                        cout<<endl<<setw(50)<<"CATALOGUE";
                        cout<<endl<<endl<<setw(5)<<"ID"<<setw(50)<<"NAME"<<setw(30)<<"PRICE";
                        cout<<endl<<endl<<line<<endl;
                        x=1;
                }
        }
        fin1.close();
        if(x!=1)
                cout<<endl<<endl<<"Sorry Sir... But Unfortunately, you had entered product id that is not listed!!!";
}





void customer :: o_cust_add()
{
	int pos;
	getdata();
	ofstream fout;
	//int i;
	fout.open("customer",ios::app);
	/*if(i!=10)
	{
	fout<<endl<<setw(50)<<"********COMPUTER SHOP********";
	fout<<endl<<setw(44)<<"CUSTOMER DATABASE";
	fout<<endl<<endl<<setw(5)<<"ID"<<setw(16)<<"NAME"<<setw(15)<<"AGE"<<setw(16)<<"GENDER"<<setw(20)<<"CITY"<<setw(18)<<"CONTACT";
	i=10;
	}*/
	fout<<endl<<endl<<setw(5)<<c_id<<setw(16)<<c_name<<setw(15)<<c_age<<setw(16)<<c_gender<<setw(20)<<c_city<<setw(18)<<c_mob_no<<setw(5)<<"";
	fout.close();
}

void supplier :: o_supp_add()
{
        getdata();
        ofstream fout;
        fout.open("supplier",ios::app);
	fout<<endl<<endl<<setw(5)<<s_id<<setw(16)<<s_name<<setw(15)<<s_age<<setw(16)<<s_gender<<setw(20)<<s_city<<setw(18)<<s_mob_no<<setw(5)<<"";
        fout.close();
}

void bill :: o_bill_add()
{
        getdata();
        ofstream fout;
        fout.open("bill",ios::app);
	fout<<endl<<endl<<setw(5)<<b_id<<setw(16)<<b_name<<setw(18)<<b_city<<setw(16)<<b_mob_no<<setw(15)<<b_date<<setw(20)<<"Rs."<<b_total_amt<<"/-"<<setw(5)<<"";
        fout.close();
}

void catalogue :: o_cat_add()
{
        getdata();
        ofstream fout;
        fout.open("catalogue",ios::app);
        fout<<endl<<endl<<setw(5)<<p_id<<setw(50)<<p_name<<setw(25)<<"Rs."<<p_price<<"/-"<<setw(5)<<"";
        fout.close();
}

void shopping_cart :: c_sc_add()
{
	const int N=200;
        char line[N];
        cout<<endl<<"Enter product's id, that you want to add into shopping cart: ";
        int id_se,x;
        cin>>id_se;
        ifstream fin1("catalogue");
	ofstream fout("shopping_cart",ios::app);
        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j==id_se)
                {
                        fout<<endl<<line<<endl;
                        x=1;
                }
        }
        fin1.close();
        if(x!=1)
                cout<<endl<<endl<<"Sorry Sir... But Unfortunately, you had entered product id that is not listed!!!";
	else
	{
		cout<<endl<<endl<<endl<<"Your Shopping cart is as under";
		ifstream fin;
	        fin.open("shopping_cart");
        	const int N=200;
	        char line[N];
	        while(fin)
	        {
	                fin.getline(line,N);
	                cout<<line<<endl;
	        }
	        fin.close();
		cout<<endl<<endl<<"Press 1. To Shop more";
		cout<<endl<<setw(30)<<"2. to remove any product";
		cout<<endl<<setw(16)<<"9. to Exit";
		int ch;
		cout<<endl<<"Your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: customer_menu();
				break;
			case 2: c_sc_delete();
				break;
			case 9: cout<<endl<<endl<<endl<<setw(55)<<"Thank you for visiting... :)";
	                        cout<<endl<<endl<<endl<<endl;
				exit(0);
				break;
			default: default_msg_for_switch();
				break;
		}


	}

}


void customer :: o_cust_show_full()
{
	ifstream fin;
	fin.open("customer");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
	fin.close();
}

void supplier :: o_supp_show_full()
{
        ifstream fin;
        fin.open("supplier");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
	fin.close();
}

void bill :: o_bill_show_full()
{
        ifstream fin;
        fin.open("bill");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
	fin.close();
}

void catalogue :: o_cat_show_full()
{
        ifstream fin;
        fin.open("catalogue");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
	fin.close();
}

void shopping_cart :: c_sc_show_full()
{
        ifstream fin;
        fin.open("shopping_cart");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
}

void customer :: o_cust_update()
{
        cout<<endl<<"Here is your full database...";
        ifstream fin;
        fin.open("customer");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
        cout<<endl<<endl<<"Which record would you like to update??";
        cout<<endl<<"Enter id of the record you want to update: ";
        int id_up,x;
        cin>>id_up;
        ifstream fin1("customer");
        ofstream fout("temp");

        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j!=id_up)
                {
			
                      	fout<<line<<endl;  
                      	
			
		}
		else
		{
			x=1;	
			getdata();
			fout<<setw(5)<<c_id<<setw(16)<<c_name<<setw(15)<<c_age<<setw(16)<<c_gender<<setw(20)<<c_city<<setw(18)<<c_mob_no<<setw(5)<<""<<endl;
        	}		
        }
        fin1.close();
        fout.close();
        remove("customer");
        rename("temp","customer");
	if(x==1)
        {
                cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
                cout<<endl<<endl<<"File after performing updatation is as under";
                ifstream fin2("customer");
                while(fin2)
                {
                        fin2.getline(line,N);
                        cout<<line<<endl;
                }
                fin2.close();
        }

        else
                cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";

}

void supplier :: o_supp_update()
{
        cout<<endl<<"Here is your full database...";
        ifstream fin;
        fin.open("supplier");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
        cout<<endl<<endl<<"Which record would you like to update??";
        cout<<endl<<"Enter id of the record you want to update: ";
        int id_up,x;
        cin>>id_up;
        ifstream fin1("supplier");
        ofstream fout("stemp");

        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j!=id_up)
                {

                        fout<<line<<endl;
                        
                }

		else
                {
                        x=1;
                        getdata();
                        fout<<setw(5)<<s_id<<setw(16)<<s_name<<setw(15)<<s_age<<setw(16)<<s_gender<<setw(20)<<s_city<<setw(18)<<s_mob_no<<setw(5)<<""<<endl;

                }
        }
        fin1.close();
        fout.close();
        remove("supplier");
        rename("stemp","supplier");
        if(x==1)
        {
                cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
                cout<<endl<<endl<<"File after performing updatation is as under";
                ifstream fin2("supplier");
                while(fin2)
                {
                        fin2.getline(line,N);
                        cout<<line<<endl;
                }
                fin2.close();
        }

        else
                cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";
}

void bill :: o_bill_update()
{
        cout<<endl<<"Here is your full database...";
        ifstream fin;
        fin.open("bill");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
        cout<<endl<<endl<<"Which record would you like to update??";
        cout<<endl<<"Enter id of the record you want to update: ";
        int id_up,x;
        cin>>id_up;
        ifstream fin1("bill");
        ofstream fout("btemp");

        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j!=id_up)
                {

                        fout<<line<<endl;
               //         x=1;

                }
 
		else
                {
                        x=1;
                        getdata();
                        fout<<setw(5)<<b_id<<setw(16)<<b_name<<setw(18)<<b_city<<setw(16)<<b_mob_no<<setw(15)<<b_date<<setw(20)<<"Rs."<<b_total_amt<<"/-"<<setw(5)<<""<<endl;

                }
        }
        fin1.close();
        fout.close();
        remove("bill");
        rename("btemp","bill");
        if(x==1)
        {
                cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
                cout<<endl<<endl<<"File after performing updatation is as under";
                ifstream fin2("bill");
                while(fin2)
                {
                        fin2.getline(line,N);
                        cout<<line<<endl;
                }
                fin2.close();
        }

        else
                cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";

}


void catalogue :: o_cat_update()
{
        cout<<endl<<"Here is your full database...";
        ifstream fin;
        fin.open("catalogue");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
        cout<<endl<<endl<<"Which record would you like to update??";
        cout<<endl<<"Enter id of the record you want to update: ";
        int id_up,x;
        cin>>id_up;
        ifstream fin1("catalogue");
        ofstream fout("catemp");

        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j!=id_up)
                {

                        fout<<line<<endl;
               //         x=1;

                }
		else
                {
                        x=1;
                        getdata();
        		fout<<setw(5)<<p_id<<setw(50)<<p_name<<setw(25)<<"Rs."<<p_price<<"/-"<<setw(5)<<""<<endl;

                }
        }
        fin1.close();
        fout.close();
        remove("catalogue");
        rename("catemp","catalogue");
        if(x==1)
        {
                cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
                cout<<endl<<endl<<"File after performing updatation is as under";
                ifstream fin2("catalogue");
                while(fin2)
                {
                        fin2.getline(line,N);
                        cout<<line<<endl;
                }
                fin2.close();
        }

        else
                cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";

}

		


void customer :: o_cust_delete()
{
	cout<<endl<<"Here is your full database...";
	ifstream fin;
        fin.open("customer");
        const int N=200;
        char line[N];
	while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
	fin.close();
	cout<<endl<<endl<<"Which record would you like to delete??";
	cout<<endl<<"Enter id of the record you want to delete: ";
	int id_de,x;
	cin>>id_de;
	ifstream fin1("customer");
	ofstream fout("temp");
	
	while(fin1)
	{
		fin1.getline(line,N);
		int j=atoi(line);
		if(j!=id_de)
		{
			fout<<line<<endl;
			x=1;
		}
	}
	fin1.close();
	fout.close();
	remove("customer");
	rename("temp","customer");
	if(x==1)
	{
		cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
		cout<<endl<<endl<<"File after performing deletion is as under";
	        ifstream fin2("customer");
        	while(fin2)
	        {
        	        fin2.getline(line,N);
                	cout<<line<<endl;
	        }
        	fin2.close();
	}

	else
		cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";
	
}

void supplier :: o_supp_delete()
{
        cout<<endl<<"Here is your full database...";
        ifstream fin;
        fin.open("supplier");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
        cout<<endl<<endl<<"Which record would you like to delete??";
        cout<<endl<<"Enter id of the record you want to delete: ";
        int id_de,x;
        cin>>id_de;
        ifstream fin1("supplier");
        ofstream fout("stemp");

        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j!=id_de)
                {
                        fout<<line<<endl;
                        x=1;
                }
        }
        fin1.close();
        fout.close();
	remove("supplier");
        rename("stemp","supplier");
        if(x==1)
        {
                cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
                cout<<endl<<endl<<"File after performing deletion is as under";
                ifstream fin2("supplier");
                while(fin2)
                {
                        fin2.getline(line,N);
                        cout<<line<<endl;
                }
                fin2.close();
        }

        else
                cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";
}

void bill :: o_bill_delete()
{
        cout<<endl<<"Here is your full database...";
        ifstream fin;
        fin.open("bill");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
        cout<<endl<<endl<<"Which record would you like to delete??";
        cout<<endl<<"Enter id of the record you want to delete: ";
        int id_de,x;
        cin>>id_de;
        ifstream fin1("bill");
        ofstream fout("btemp");

        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j!=id_de)
                {
                        fout<<line<<endl;
                        x=1;
                }
        }
        fin1.close();
        fout.close();
	remove("bill");
        rename("btemp","bill");
        if(x==1)
        {
                cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
                cout<<endl<<endl<<"File after performing deletion is as under";
                ifstream fin2("bill");
                while(fin2)
                {
                        fin2.getline(line,N);
                        cout<<line<<endl;
                }
                fin2.close();
        }

        else
                cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";
}

void catalogue :: o_cat_delete()
{
        cout<<endl<<"Here is your full database...";
        ifstream fin;
        fin.open("catalogue");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
        cout<<endl<<endl<<"Which record would you like to delete??";
        cout<<endl<<"Enter id of the record you want to delete: ";
        int id_de,x;
        cin>>id_de;
        ifstream fin1("catalogue");
        ofstream fout("catemp");

        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j!=id_de)
                {
                        fout<<line<<endl;
                        x=1;
                }
        }
        fin1.close();
        fout.close();
	remove("catalogue");
        rename("catemp","catalogue");
        if(x==1)
        {
                cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
                cout<<endl<<endl<<"File after performing deletion is as under";
                ifstream fin2("catalogue");
                while(fin2)
                {
                        fin2.getline(line,N);
                        cout<<line<<endl;
                }
                fin2.close();
        }

        else
                cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";
}

void shopping_cart :: c_sc_delete()
{
        cout<<endl<<"Here is your Shopping cart...";
        ifstream fin;
        fin.open("shopping_cart");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
        cout<<endl<<endl<<"Which product would you like to remove??";
        cout<<endl<<"Enter id of the product you want to remove: ";
        int id_de,x;
        cin>>id_de;
        ifstream fin1("shopping_cart");
        ofstream fout("sctemp");

        while(fin1)
        {
                fin1.getline(line,N);
                int j=atoi(line);
                if(j!=id_de)
                {
                        fout<<line<<endl;
                        x=1;
                }
        }
        fin1.close();
        fout.close();
	remove("shopping_cart");
        rename("sctemp","shopping_cart");
        if(x==1)
        {
                cout<<endl<<endl<<endl<<setw(60)<<"SUCCESSFUL";
                cout<<endl<<endl<<"File after performing removal of product, your shopping cart is as under";
                ifstream fin2("shopping_cart");
                while(fin2)
                {
                        fin2.getline(line,N);
                        cout<<line<<endl;
                }
                fin2.close();
                cout<<endl<<endl<<"Press 1. To Shop more";
		cout<<endl<<setw(23)<<"2. To remove more";
                cout<<endl<<setw(16)<<"9. to Exit";
                int ch;
                cout<<endl<<"Your choice: ";
                cin>>ch;
                switch(ch)
                {
                        case 1: customer_menu();
                                break;
                        case 2: c_sc_delete();
                                break;
                        case 9: cout<<endl<<endl<<endl<<setw(55)<<"Thank you for visiting... :)";
                                cout<<endl<<endl<<endl<<endl;
                                exit(0);
                                break;
                        default: default_msg_for_switch();
                                break;
                }

        }

        else
                cout<<endl<<endl<<endl<<setw(60)<<"UNSUCCESSFUL";
}




void o_catalogue()
{
	catalogue Ca[100];
	o_ca_menu:
	cout<<endl<<"Below one is your online catalogue...";
	//here file of catalogue will be read
	cout<<endl<<endl<<"Press 1. to add item in the catalogue";
	cout<<endl<<setw(39)<<"2. Remove item from the catalogue";
	cout<<endl<<setw(28)<<"3. Show full catalogue";
	cout<<endl<<setw(39)<<"4. Search item from the catalogue";
	cout<<endl<<setw(39)<<"5. Update item from the catalogue";
	cout<<endl<<setw(28)<<"9. Go to previous menu";
	cout<<endl<<"Your choice:";
        int o_cat_ch,i=0;
        cin>>o_cat_ch;
	i++;
        switch(o_cat_ch)
        {
                case 1: Ca[i].o_cat_add();
			goto o_ca_menu;
			break;
                case 2: Ca[i].o_cat_delete();
			goto o_ca_menu;
			break;
		case 3: Ca[i].o_cat_show_full();
			goto o_ca_menu;
			break;
		case 4: Ca[i].o_cat_search();
			goto o_ca_menu;
			break;
		case 5: Ca[i].o_cat_update();
			goto o_ca_menu;
                case 9: owner_menu();
                        break;
                default: default_msg_for_switch();
                        break;
        }

}

void o_bill_menu()
{
	bill B[100];
	o_b_menu:
        cout<<endl<<endl<<"How would you like to access Bill's information??";
        cout<<endl<<setw(19)<<"1. Add New Bill";
        cout<<endl<<setw(18)<<"2. Delete Bill";
        cout<<endl<<setw(18)<<"3. Update Bill";
        cout<<endl<<setw(35)<<"4. Search for Bill by Bill-name";
        cout<<endl<<setw(34)<<"5. Show Full Database of Bills";
        cout<<endl<<setw(26)<<"9. Go to previous menu";
        cout<<endl<<"Your choice:";
        int o_bill_menu_ch,i=0;
        cin>>o_bill_menu_ch;
	i++;
        switch(o_bill_menu_ch)
        {
                case 1: B[i].o_bill_add();
			goto o_b_menu;
			break;
                case 2: B[i].o_bill_delete();
			goto o_b_menu;
			break;
                case 3: B[i].o_bill_update();
			goto o_b_menu;
			break;
                case 4: B[i].o_bill_search();
			goto o_b_menu;
			break;
                case 5: B[i].o_bill_show_full();
			goto o_b_menu;
			break;
                case 9: owner_menu();
                        break;
                default: default_msg_for_switch();
                        break;
        }
}


void o_supp_menu()
{
	supplier S[100];
	o_s_menu:
        cout<<endl<<endl<<"How would you like to access supplier's information??";
        cout<<endl<<setw(29)<<"1. Add Supplier's Details";
        cout<<endl<<setw(31)<<"2. Delete Supplier's Detail";
        cout<<endl<<setw(31)<<"3. Update Supplier's Detail";
        cout<<endl<<setw(34)<<"4. Search for Supplier by name";
        cout<<endl<<setw(37)<<"5. Show Full Database of Supplier";
        cout<<endl<<setw(26)<<"9. Go to previous menu";
        cout<<endl<<"Your choice:";
        int o_supp_menu_ch,i=0;
        cin>>o_supp_menu_ch;
	i++;
        switch(o_supp_menu_ch)
        {
                case 1: S[i].o_supp_add();
			goto o_s_menu;
			break;
                case 2: S[i].o_supp_delete();
			goto o_s_menu;
			break;
                case 3: S[i].o_supp_update();
			goto o_s_menu;
			break;
                case 4: S[i].o_supp_search();
			goto o_s_menu;
			break;
                case 5: S[i].o_supp_show_full();
			goto o_s_menu;
			break;
                case 9: owner_menu();
                        break;
                default: default_msg_for_switch();
                        break;
        }
}


void o_cust_menu()
{
	customer C[100];
	o_c_menu:
        cout<<endl<<endl<<"How would you like to access customer's information??";
        cout<<endl<<setw(29)<<"1. Add Customer's Details";
        cout<<endl<<setw(31)<<"2. Delete Customer's Detail";
        cout<<endl<<setw(31)<<"3. Update Customer's Detail";
        cout<<endl<<setw(34)<<"4. Search for Customer by name";
        cout<<endl<<setw(37)<<"5. Show Full Database of Customer";
        cout<<endl<<setw(26)<<"9. Go to previous menu";
        cout<<endl<<"Your choice:";
        int o_cust_menu_ch,i=0;
        cin>>o_cust_menu_ch;
	i++;
        switch(o_cust_menu_ch)
        {
                case 1:	C[i].o_cust_add();
			goto o_c_menu;
			break;
                case 2: C[i].o_cust_delete();
			goto o_c_menu;
			break;
                case 3: C[i].o_cust_update();
			goto o_c_menu;
			break;
                case 4: C[i].o_cust_search();
			goto o_c_menu;
			break;
                case 5: C[i].o_cust_show_full();
			goto o_c_menu;
			break;
                case 9: owner_menu();
                        break;
                default: default_msg_for_switch();
                        break;
        }
}

void customer_menu()
{
	shopping_cart SC[100];
	//c_menu:
	cout<<endl<<endl<<endl<<endl<<setw(55)<<"Welcome sir!";
	cout<<endl<<endl<<endl<<"Catalogue is as under... Happy Surfing.. :) ";
	cout<<endl<<endl;
	ifstream fin;
        fin.open("catalogue");
        const int N=200;
        char line[N];
        while(fin)
        {
                fin.getline(line,N);
                cout<<line<<endl;
        }
        fin.close();
	cout<<endl<<endl<<"Please Press 1. to add product in shopping cart";
	cout<<endl<<setw(42)<<"2. to open your shopping cart";
	cout<<endl<<setw(38)<<"9. to go to previous menu";
	cout<<endl<<"Your Choice Sir! :  ";
	int ch,i=0;
	cin>>ch;
	i++;
	switch(ch)
	{
		case 1: SC[i].c_sc_add();
			//goto c_menu;
			break;
		case 2: SC[i].c_sc_show_full();
			break;
		case 9: cout<<endl<<endl<<endl<<setw(55)<<"Thank you for visiting... :)";
                        cout<<endl<<endl<<endl<<endl;
			break;
		default: default_msg_for_switch();
			break;
	}
}


void owner_menu()
{ 
	int o_menu_ch;
	char ch;
	char do_ch;
	do
	{
	cout<<endl<<"What would you like to do, Sir??";
	cout<<endl<<setw(28)<<"1. Scan Product Barcode";
	cout<<endl<<setw(26)<<"2. Customer's Details";
	cout<<endl<<setw(26)<<"3. Supplier's Details";
	cout<<endl<<setw(20)<<"4. Bill Details";
	cout<<endl<<setw(37)<<"5. To manipuate online catalogue";
	cout<<endl<<setw(18)<<"9. To log out";
	cout<<endl<<"Your choice:";
	cin>>o_menu_ch;
	switch(o_menu_ch)
	{
		case 1: cout<<setw(66)<<"Please keep the product against barcode scanning device!";
			cout<<endl<<endl<<"Do You want to choice agian?? Y. Yes N. No"<<endl<<"Your Choice:";
			cin>>ch;
			if(ch=='y' || ch=='Y')
			{
				owner_menu();
				break;
			}
			else
				break;
		case 2: o_cust_menu();
			break;
		case 3: o_supp_menu();
			break;
		case 4: o_bill_menu();
			break;
		case 5:	o_catalogue(); 
			break;
		case 9: cout<<endl<<endl<<endl<<setw(55)<<"Thank you for loging in";
			cout<<endl<<endl<<endl<<endl;
			break;
		default:default_msg_for_switch();
				break;
	}
	}while(do_ch == 'y' || do_ch == 'Y');
}

void start_screen()
{
	int loginch;
        int switchch;
	do
	{
	cout<<endl<<endl<<"How would you like to login - as a customer or as owner??";
	cout<<endl<<setw(22)<<"1. Customer"<<endl<<setw(19)<<"2. Owner"<<endl<<setw(25)<<"3. Exit System";
        cout<<"\nYour choice: ";
        cin>>loginch;
	switch(loginch)
        {
                case 1: customer_menu();
			break;
                case 2: int check;
                        check=owner_authen();
                        if(check == 1)
                        {
                                cout<<"Welcome Meet!";
                                owner_menu();
                                break;
                        }
                        else
                                cout<<endl<<"Invalid Username or Password!! Please try again...";
                                break;
		case 3: switchch=1;
			break;
		default: cout<<endl<<"Invalid Choice!!!";
                        break;
        }
        }while(switchch!=1);
}

int main()
{
	start_screen();
//	cout<<"In main  ";
	return 0;
}

