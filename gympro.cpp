#include<iostream>
#include<fstream>
#include<windows.h>
#include<cstring>
#include<conio.h>
using namespace std;
class Menu
{
	public:
		void show1()
		{
			system("color 37");
			cout<<"";
				cout<<"\n\n\n\t\t\t\t\t\tGYM MANAGEMENT SYSTEM"<<endl<<endl;
		cout<<"\n\t\t\t\tPress 1 for Login";
		cout<<"\n\n\t\t\t\tPress 2 for Registration";
		cout<<"\n\n\t\t\t\tPress 3 for exit\n";
		cout<<"\t\t\t______";
	
		}
		
};
class submenu:public Menu
{
	
	protected:
		string name;
						string neew_reg;

		string cnic,con_number;
		string username_R,pass_R;
		string address,name1,pass1;
		
	    string m_user,m_pass;
		string username,pass;
		int opt1,opt2,opt3;
		char back,line;
		//for Dashboard.
		char ch;
		int opt4,opt_time;
		string name_mem;
		string Reg_no;
		string Phone_num;
		string address_mem;
		string Timing;
		public:
			submenu()//constructor
			{
				system("color 37");
	
    
				opt1=0;
				opt2=0;
				opt3=0;
			}
			
			public:
				void input_choice()
				{
		
		
				Menu::show1();
				cout<<"\n\n\t\t\tEnter option: ";
				cin>>opt1;
				cout<<endl<<endl<<endl;
				
				switch(opt1)
				{
					
				    case 1:
				    	
					system("cls");
					Login_forms();
					break;
					
					
					case 2:
					system("cls");
					Reg_forms();
					break;	
							
					case 3:
						cout<<"You Are Exit Successfully..."<<endl<<endl<<endl;
							exit(0);
				}
				
	            }//enter functions
	void Login_forms()
	{
		
		
			cout<<"\n\n\n\t\t\t\t\t\tLOGIN FORM";
			cout<<"\n\n\n\t\t\t\t\tPress 1 for Employee Login: ";
			cout<<"\n\n\n\t\t\t\t\tPress 2 for Admin Login: ";
			cout<<"\n\n\n\t\t\t\t\tPress 3 to go back ";
			cout<<"\n\t\t\t\t_______";
			cout<<"\n\n\t\t\tEnter option: ";
			cin>>opt2;
			switch(opt2)
			{
				case 1:
					
					system("cls");
					log_for_emp();
					
					break;
				case 2:
					
						system("cls");
						log_for_adm();
				
				case 3:
					
					system("cls");
					input_choice();
			}
	}
	void log_for_adm()
	{
		char y=219;
		
		cout<<"\n\n\t\t\t\tLogin form for Admin";
		cout<<"\n\n\n\t\t\tPress Y/y to go back: "<<endl;
		cin>>back;
		if(back=='Y'||back=='y')
		{
			system("cls");
			Login_forms();
		}
		cout<<"\n\n\t\t\tEnter username: ";
		
		cin.ignore();
		
		cin>>username;
		
		cout<<"\n\n\t\t\tEnter password: ";
		cin>>pass;

	if(username=="mazhar" && pass=="mazhar123")
		{
			
			
			cout<<"Login Successfully...\n\n\n";
			system("cls");
		loading();
            system("cls");
            dashboard_for_adm();
            
            
		}
		
//		ifstream read("E_records.txt");
//		getline(read,name1);
//		getline(read,pass1);
//		if(username==name1 && pass==pass1){
//			cout<<"fuck";
//		}
//		else
//		cout<<"off";
//	bool flag=0;
//			
//		while(fin>>name1>>pass1){
//			if(username==name1 && pass==pass1){
//				flag=1;
//			}
//		}
//		fin.close();
//		if(flag==1){
//			cout<<"bala bala";
//		}	
//		else
//		cout<<"fail";	

		
	}
	void check_login_user()
	{
		
		 ifstream match;
		 match.open("E_records.txt");
		cout<<"\n\n\t\t\tEnter username: ";
	
		cin>>m_user;
		while(match>>username>>pass)
		{
			if(username==m_user)
			{
				cout<<"\n\t\t\tusername found";
				cout<<"\n\n\t\tenter Password: ";
				cin>>m_pass;
				if(pass==m_pass)
				{
					cout<<"Login Successfully...\n\n\n";
					system("cls");
					loading();
						system("cls");
                    dashboard_for_emp();
                    
				}
				else if (pass!=m_pass)
				{
					cout<<"you have entered wrong password:";
				}
			}
			if(username!=m_user)
			{
				cout<<"\n\t\t\tWrong username";
				check_login_user();
			}
		}
		getch();
		match.close();
	
	}
		void log_for_emp()
	{	
	   
		cout<<"\n\n\t\t\t\tLOGIN FOR EMPLOYEE";
		cout<<"\n\n\n\t\t\tPress Y/y to go back: ";
		cin>>back;
		if(back=='Y'||back=='y')
		{
			system("cls");
			Login_forms();
		}
		check_login_user();
	}
		
//		cout<<"\n\n\t\t\tEnter password: ";
//		cin>>pass;
//		   while((ch=getch()) != 13)
//    {
//        cout<<"*";
//        pass[i]=ch;
//        i++;
//    }
		

	//	if((strcmp(username,"azan")==0) && (strcmp(pass,"azan123")==0) )
//	if(username=="azan" && pass=="azan123")
//		{
//			cout<<"Login Successfully...\n\n\n";
//					system("cls");
//					loading();
//			   cout<<"\n\n\t\t\tLoading..."<<endl<<endl<<endl;
//    
//    for(int i=0;i<50;i++){
//        cout<<y;
//        Sleep(10);
//    }
//			system("cls");
//            dashboard_for_emp();
//		}
		
        




//		if(username==name1 && pass==pass1){
//			cout<<"fuck";
//		}
//		else
//		cout<<"off";
//	bool flag=0;
//			
//		while(fin>>name1>>pass1){
//			if(username==name1 && pass==pass1){
//				flag=1;
//			}
//		}
//		fin.close();
         void loading(){
         	char y=219;
         		   cout<<"\n\n\t\t\tLoading..."<<endl<<endl<<endl;
    
    for(int i=0;i<50;i++){
        cout<<y;
        Sleep(10);
    }
		 } 


		void Reg_forms()
	
		{
			cout<<"\n\n\n\t\t\t\t\t\tREGISTRATION FORM";
			cout<<"\n\n\n\t\t\t\t\t\tPress 1 for Employee Reg: ";
			cout<<"\n\n\n\t\t\t\t\t\tPress 2 for Admin Reg: ";
			cout<<"\n\n\n\t\t\t\t\t\tPress 3 to go back ";
			cout<<endl<<"\t\t\t\t______"<<endl<<endl;
			cout<<"\n\t\t\tEnter option: ";
			cin>>opt3;
			switch(opt3)
			{
				case 1:
					system("cls");
					Reg_for_emp();
					break;
				case 2:
					system("cls");
					Reg_for_adm();
					break;
				case 3:
					system("cls");
					input_choice();
					
			}
			
	    }	
		
			void Reg_for_emp()
			{
			
			cout<<"\n\n\n\t\t\t\t\tREGISTRATION FORM FOR EMPLOYEE"<<"\n\t\t\t__________"<<endl;
			cout<<"\n\n\n\t\t\tPress Y/y to go back: "<<endl;
	       	cin>>back;
	    	if(back=='Y'||back=='y')
		{
			system("cls");
			Reg_forms();
		}
			cout<<"\n\n\n\t\t\tEnter your Name: ";
			cin.ignore();
			cin>>name;
		    check_cnic();
		    check_num();

		
			cout<<"\n\n\n\t\t\tEnter Address: ";
			cin>>address;
			cout<<"\n\n\n\t\t\tEnter username: ";
			cin>>username;
		    check_pass();
//			 int count=3;
//	
			ofstream file1;
			file1.open("E_records.txt",ios::app);
		//	file1<<"FIRST NAME    LAST NAME   CNIC   CONTACT    ADDRESS   USERNAME   PASSWORD"<<endl;
			file1<<username<<" "<<pass<<" "<<name<<" "<<cnic<<" "<<con_number<<" "<<address<<endl;
			 
			cout<<"\n\n\t\t\t\Registration is successfull!!";
			file1.close();
			getch();
			system("cls");
			 input_choice();
			}

//		
//		
       void  check_cnic()
       {
       		cout<<"\n\n\n\t\t\tEnter CNIC number: ";
			cin>>cnic;
       		if(cnic.size()!=14)
       		{
       			cout<<"\n\n\t\t\tMAKE SURE CNIC NUMBER MUST CONTAIN 14 NUMBERS WITH DASH";
       			check_cnic();
			}
       		
	   }
	   void check_num()
	   {
	   	cout<<"\n\n\n\t\t\tEnter Contact number: ";
			cin>>con_number;
       		if(con_number.size()!=11)
       		{
       			cout<<"\n\n\t\t\tPLEASE ENTER CORRECT CONTACT NUMBER:";
       			check_num();
			}
       		
	   }
	   void check_pass()
	   {
	   	cout<<"\n\n\n\t\t\tEnter password: ";
		cin>>pass;
		if(pass.size()<8)
		{
			cout<<"\n\n\n\t\t\tPassword Must be strong Enter again";
			check_pass();
		}
	   	
	   }
	   
	void Reg_for_adm()
			{
			
			cout<<"\n\n\n\t\t\t\t\tREGISTRATION FORM FOR ADMIN"<<"\n\t\t\t__________"<<endl;
			cout<<"\n\n\n\t\t\tPress Y/y to go back: "<<endl;
		cin>>back;
		if(back=='Y'||back=='y')
		{
			system("cls");
			Reg_forms();
		}
			cout<<"\n\n\n\t\t\tEnter your  Name: ";
			cin.ignore();
			cin>>name;
			check_cnic();
			check_num();	
			cout<<"\n\n\n\t\t\tEnter Address: ";
	        cin>>address;
			cout<<"\n\n\n\t\t\tEnter username: ";
		
			cin>>username;
			check_pass();

			ofstream file2;
			file2.open("A_records.txt",ios::app);
		//	file1<<"FIRST NAME    LAST NAME   CNIC   CONTACT    ADDRESS   USERNAME   PASSWORD"<<endl;
			file2<<username<<" "<<pass<<" "<<name<<" "<<cnic<<" "<<con_number<<" "<<address<<endl;
			 
			cout<<"\n\n\t\t\tREGISTRATION IS SUCCESSFULL";
			file2.close();
			getch();
			system("cls");
			 input_choice();
			}
        //Dashboard for Admin

	void dashboard_for_adm()
	
			{
				system("cls");
				cout<<"\n\n\n\n\t\t\tPRESS 1 FOR ADD MEMBERS ";
				cout<<"\n\n\t\t\tPRESS 2 FOR DELETE MEMBERS ";
				cout<<"\n\n\t\t\tPRESS 3 FOR UPDATE MEMBERS DATA ";
				cout<<"\n\n\t\t\tPRESS 4 FOR SEARCH MEMBER ";
				cout<<"\n\n\t\t\tPRESS 5 FOR ADD MEMBERSHIPS ";
				cout<<"\n\n\t\t\tPRESS 6 FOR SHOW ALL MEMBERS DATA";
				cout<<"\n\n\t\t\tPRESS 7 TO EXIT ";
				cout<<"\n\t\t\t_______________________________";
				cout<<"\n\n\t\t\t ENTER OPTION: ";
				cin>>opt4;
				//options
				switch(opt4)
				{
				case 1:
					system("cls");
					add_mem();
					break;
					case 2:
						system("cls");
			//	del_mem();
				break;
				case 3:
					system("cls");
							update();
							break;
							case 4:
								system("cls");
								search_memb();
					case 6:
						system("cls");
						display_data_mem();
						break;
						default:
							system("cls");
							cout<<"Invalid Option";
							input_choice();
							break;
				}
			}	
			
			
				void reg()
				{
				
				ifstream read02;//check
				read02.open("members.txt");
				
				cout<<"\n\n\t\t\t Allot New Member Registration number: ";
				cin.ignore();
				cin>>neew_reg;
				while(read02>>Reg_no)
				{
					if(Reg_no==neew_reg)
					{
						cout<<"\n\n\t\t\tRegistration number already exit:";
						getch();
						system("cls");
					    reg();
					}
				
				}
				read02.close();
		     	}
			//chck phone length
			void chk()
			{
					cout<<"\n\t\t\t Enter correct Member Contact number: ";
				cin>>Phone_num;
				if(Phone_num.size()!=11)
				{
					cout<<"\n\n\t\t\tMake sure length of phone number must be 11:";
					chk();
					 
				}
							
				
			}
			void add_mem()
			{
				reg();
			
				cout<<"\n\t\t\t Enter Member Name: ";
				cin>>name_mem;
			
				chk();
				
				cout<<"\n\t\t\t Enter Member Address: ";
				cin>>address_mem;				
				timing();
				cout<<"\n\t\t\t_____________";
				ofstream file;
			    file.open("members.txt",ios::app);
		      	file<<neew_reg<<" "<<name_mem<<" "<<Phone_num<<" "<<address_mem<<endl;
				cout<<"\n\t\t\tPRESS Y/y TO ADD MORE MEMBERS: ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					system("cls");
					add_mem();
					
				}
				else
				{
					system("cls");
					dashboard_for_adm();
					
				}
			}
			void timing()
			{
				cout<<"\n\t\t\t\t\t\tSELECT YOUR TIMING";
				cout<<"\n\t\t\tPRESS 1 FOR MORNING 7-8 AM";
				cout<<"\n\t\t\tPRESS 2 FOR MORNING 8-9 AM";
				cout<<"\n\t\t\tPRESS 3 FOR MORNING 9-10 AM";
				cout<<"\n\t\t\tPRESS 4 FOR MORNING 10-12 AM";
				cout<<"\n\t\t\tPRESS 5 FOR EVENING 5-7 PM";
				cout<<"\n\t\t\tPRESS 6 FOR EVENING 7-9 AM";
				cout<<"\n\t\t\tPRESS 7 FOR EVENING 9-11 AM";
				cout<<"\n\t\t\tPRESS 8 FOR EVENING 11-12 AM";
				cout<<"\n\t\t\t Enter Choice: ";
				//cin.ignore();
				cin>>opt_time;
				switch(opt_time)
				{
					           case 1:
					    	   cout<<"\t\t\tMorning 7-8 AM";
					    	   break;
					         	case 2:
								cout<<"\t\t\tMorning 8-9 AM";
								break;
								case 3:
								cout<<"\t\t\tMorning 9-10 AM";
								break;
								case 4:
								cout<<"\t\t\tMorning 10-12 AM";
								break;
								case 5:
								cout<<"\t\t\tEvening 5-7 PM";
								break;
								case 6:
								cout<<"\t\t\tEvening 7-9 PM";
								break;
								case 7:
								cout<<"\t\t\tEvening 9-11 PM";
								break;
								case 8:
								cout<<"\t\t\tEvening 11-12 PM";
								break;
				}
			}
			
			
			//Dashboard for Employee
				void dashboard_for_emp()
			{
				cout<<"\n\n\n\n\t\t\tPRESS 1 FOR ADD MEMBERS ";
				//cout<<"\n\n\t\t\tPRESS 2 FOR DELETE MEMBERS ";
				cout<<"\n\n\t\t\tPRESS 2 FOR UPDATE MEMBERS DATA ";
				cout<<"\n\n\t\t\tPRESS 3 FOR SEARCH MEMBER ";
			//	cout<<"\n\n\t\t\tPRESS 5 FOR ADD MEMBERSHIPS ";
			//	cout<<"\n\n\t\t\tPRESS 6 FOR SHOW ALL MEMBERS DATA";
				cout<<"\n\n\t\t\tPRESS 4 TO GO BACK ";
				cout<<"\n\t\t________";
				cout<<"\n\n\t\t\t ENTER OPTION: ";
				cin>>opt4;
				//options
				
				
				
				switch(opt4)
				{
				case 1:
					system("cls");
					add_mem1();
					break;
					case 2:
				system("cls");
							update();
						case 3:
							system("cls");
							search_memb();
				default:
					system("cls");
					Login_forms();
				}
			}	
			
		
			void add_mem1()
			{
				
				cout<<"\n\n\t\t\t Allot New Member Registration number: ";
				cin.ignore();
				cin>>Reg_no;
				cout<<"\n\t\t\t Enter Member Name: ";
				cin>>name_mem;
				cout<<"\n\t\t\t Enter Member Contact number: ";
				cin>>Phone_num;
				cout<<"\n\t\t\t Enter Member Address: ";
				cin>>address_mem;				
				timing();
				cout<<"\n\t\t\t____";
				ofstream file;
			    file.open("members.txt",ios::app);
		      	file<<Reg_no<<" "<<name_mem<<" "<<Phone_num<<" "<<address_mem<<endl;
				cout<<"\n\t\t\tPRESS Y/y TO ADD MORE MEMBERS: ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
					system("cls");
					add_mem1();
					
				}
				else
				{
					system("cls");
					dashboard_for_emp();
					
				}
			}
	void display_data_mem()
			{
				ifstream read1;
				read1.open("members.txt",ios::in);
				cout<<"\nReg No"<<"\t"<<"Name"<<"\t"<<"Phone_No"<<"\t"<<"Address"<<endl;
		
				 while(read1 >> Reg_no)
			{
				
			read1>>name_mem;
			read1>>Phone_num;
			read1>>address_mem;
	
		    cout<<Reg_no<<"\t"<<name_mem<<"\t"<<Phone_num<<"\t"<<address_mem<<endl;

		//	cout<<Reg_no<<"\t"<<name_mem<<"\t"<<Phone_num<<"\t"<<address_mem<<endl;
		

			}
			
		
		getch();
			read1.close();
			system("cls");
			dashboard_for_adm();
			}
			void update()
			{
				  

    ifstream fin;
    fin.open("members.txt",ios::in);
    if(!fin)
    {
        cout<<"File not found";
    }
    else
    {
        
        cout<<"\n\tReg No\t\tName\tPhone No\t\tAddress"<<endl;
        cout<<"\t----------------------------------------------------------------------------------------------------"<<endl;
        while(fin >> Reg_no)
        {
           // fin.ignore(1,'\n');
            fin>>name_mem;
            fin>>Phone_num;
            fin>>address_mem;
//            fin>>price;
//            fin>>quantity;
            cout<<"\t"<<Reg_no<<"\t"<<name_mem<<"\t"<<Phone_num<<"\t"<<address_mem<<endl;

        }
    }
    fin.close();
		
		string id;
		
		    int  flag = 0, choice;
    ifstream read_file;
    ofstream update_file;
    read_file.open("members.txt");
    update_file.open("temp.txt");
    cout << "Enter the Reg ID  you want to update: ";
    cin >> id;
    while(read_file >> Reg_no)
    {
        if(Reg_no == id)
        {
            flag = 1;
           // read_file.ignore(1, '\n');
            read_file>>name_mem;
            cout << "Name: " << name_mem << endl;
            read_file>>Phone_num;
            cout << "Phone No: " <<Phone_num << endl;
            read_file>>address_mem;
            cout << "Address: " << address_mem << endl;
           
			        cout << "\n\nEnter the new details:" << endl;
        cout << "What do you want to update?\n1.Name\n2.Phone No\n3.Adress\nEnter your choice: ";
            cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "Enter Name: ";
           // cin.ignore(1, '\n');
            cin>>name_mem;
            break;
        case 2:
            cout << "Enter Phone NO: ";
           // cin.ignore(1, '\n');
            cin>>Phone_num;
            break;
        case 3:
            cout << "Enter Address: ";
            cin>>address_mem;
            break;
        
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
        update_file<<Reg_no <<" "<<name_mem << " " << Phone_num << " " << address_mem<<endl;
    }
    else
    {
       // read_file.ignore(1, '\n');
        update_file << Reg_no << " ";
        read_file>>name_mem;
        update_file << name_mem << " ";
        read_file>>Phone_num;
        update_file << Phone_num << " ";
        read_file>>address_mem;
        update_file << address_mem << " \n";
        
    }
	}
	if(flag == 0)
	{
	cout << "Book not found!" << endl;}
	else
	{
	read_file.close();
    update_file.close();
    remove("members.txt");
    rename("temp.txt", "members.txt");
    }
		getch();	
		system("cls");
				dashboard_for_adm();
			}
			
			
//				void del_mem()
//			
//				{
//					ifstream mem_file("members.txt");
//    cout  << "Reg no" <<"\t\t\tName"<<"\t\t\tPhone number" << "\t\t\tAddress"  << endl;
//    cout << "---------------------------------------------------------------------" << endl;
//    string name, address, phone_number;
//    int id;
//    while (mem_file >> Reg_no >> name >> phone_number>>address )
//	 {
//        cout << Reg_no << "\t\t\t" << name <<"\t\t\t" <<phone_number <<"\t\t\t"<<address << endl;
//    }
//    mem_file.close();
//
//    string id2;
//    string line;
//    cout << "Enter the ID of the client you want to delete: ";
//    cin >> id2;
//
//    ifstream memFile("members.txt");
//    ofstream tempFile("temp1.txt");
//
//    while (getline(memFile, line)) 
//	{
//        if (line.find(id2) == string::npos)
//		{
//            tempFile << line << endl;
//        }
//    }
//
//    memFile.close();
//    tempFile.close();
//
//    remove("members.txt");
//    rename("temp1.txt", "members.txt");
//    cout<<"\n Data Deleted Successfully\t";
//				getch();
//				dashboard_for_adm();
//				}
			
			
			
		void search_memb()
			{
				int count=0;
				string id0;
				ifstream search_mem;
				search_mem.open("members.txt");
				cout<<"\n\n\t\t\tEnter the member id you want to search: ";
				cin>>id0;
				
			
					
				while(search_mem>>Reg_no)
				{
					if(Reg_no==id0)
					{
						count++;
						 search_mem>>name_mem;
            cout << "Name: " << name_mem << endl;
            search_mem>>Phone_num;
            cout << "Phone No: " <<Phone_num << endl;
            search_mem>>address_mem;
            cout << "Address: " << address_mem << endl;
            break;
					}
				 
					
				}
				if(count==0){
						cout<<"invalid";
					}
				
				
				search_mem.close();
					getch();
				system("cls");
				dashboard_for_adm();
				
				
			}	
	
 } ;
int main()
{
	submenu s1;
	s1.input_choice();
	return 0;
}
