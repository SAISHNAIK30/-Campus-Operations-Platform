#include<conio.h>
#include<string>
#include<iomanip>
#include<iostream>
using namespace std;
static int abc = 1, i = 1, j = 1, k = 1, l = 1;
class vIRTUAL
{
public:virtual void get();
	  virtual void put();
	  string name, time;
	  int age;
};
void vIRTUAL::get()
{
	system("cls");
	cin.ignore();
	cout << "\nENTER THE PATIENTS NAME : ";
	getline(cin, name);
	cout << "\nENTER APPOINTMENT TIME : ";
	getline(cin, time);
	cout << "\nENTER AGE : ";
	cin >> age;
	cout << "\nAPOINTMENT NUMBER:";
}
void vIRTUAL::put()
{
	cout << "\nNAME : " << name;
	cout << "\nAGE : " << age;
	cout << "\nTIME : " << time << endl << endl;
}
class salary :public vIRTUAL
{
	string name, wpos;
	int wage, wsalary;
public:
	void operator ++(); //operator overloading
	void sget()
	{
		system("cls");
		cin.ignore();
		cout << "\nENTER NAME : ";
		getline(cin, name);
		cout << "\nENTER AGE :";
		cin >> wage;
		cout << "\nENTER SALARY : ";
		cin >> wsalary;
		cin.ignore();
		cout << "\nWORKING POSITION : ";
		getline(cin, wpos);
		_getch();
	}
	void sput()
	{
		cout << "NAME" << setw(15) << ": " << name << "\nAGE" << setw(16) << ": " << wage <<
			"\nWORKING POSITION : " << wpos << "\nSALARY" << setw(13) << ": " << wsalary << endl << endl;
	};
};
void salary::operator++()
{
	int o;
	cout << "ENTER INCREMENT AMOUNT :";
	cin >> o;
	wsalary = wsalary + o;
	cout << "SALARY UPDATED SUCCESSFULLY";
	_getch();
}
salary S[10];
class info :public vIRTUAL
{
public:
	void geti()
	{
		get();
	}
	void puti()
	{
		put();
	}
};
class RAJ :public info
{
public:
	void getr()
	{
		get();
	}
	void putr()
	{
		put();
	}
};
RAJ a[3];
class SHREYAS :public info
{
public:
	void gets()
	{
		get();
	}
	void puts()
	{
		put();
	}
};
SHREYAS b[3];
class SAISH :public info
{
public:void getsa()
{
	get();
}
	  void putsa()
	  {
		  put();
	  }
};
SAISH c[3];
void menu()
{
	system("cls");
	cout << "\n";
	cout << "\n";
	cout << "\t\t |*****************************************|\n";
	cout << "\t\t | MAIN MENU |\n";
	cout << "\t\t | HOSPITAL MANAGEMENT SYSTEM |\n";
	cout << "\t\t |*****************************************|\n";
	cout << "\n--------------------------------------------------------------------------------------\n";
	cout << "\t\t\tPLEASE SELECT ANY OPTION \n";
	cout << "\n\t\tPRESS 1 FOR AVAILABLE DOCTOR INFORMATION \n\n";
	cout << "\n\t\tPRESS 2 FOR DOCTOR APPOINTMENT \n\n";
	cout << "\n\t\tPRESS 3 FOR SAVING STAFF INFORMATION \n\n";
	cout << "\n\t\tPRESS 4 CHECK PATIENT APPOINTMENT MENU \n\n";
	cout << "\n\t\tPRESS 5 CHECKING STAFF INFORMATION MENU \n\n";
	cout << "\n\t\tPRESS 6 TO INCREASE SALARY OF STAFF\n\n";
	cout << "\n\t\tPRESS 7 FOR LOGOUT \n\n";
	cout <<
		"\n========================================================================================\n";
	cout << "\n\n\t\tPLEASE ENTER YOUR CHOICE:";
}
void drinfo()
{
	system("cls");
	cout <<
		"\n==============================================================================================\n";
	cout << "\n\n\t\t(Three Doctor Available) \n\n \t\t[Information And Timing Are Given Below]\n";
	cout << "\n----------------------------------------------------------------------------------------------\n";
	cout << "\t\t Dr.Raj(skin specialist)\n\n";
	cout << "\t\t\t [Timimg] \t\t\t\n";
	cout << "\tMonday To Friday\t\t9AM to 5PM\n";
	cout << "\tSaturday \t\t9AM to 1PM\n";
	cout << "\tSunday \t\t OFF\n";
	cout << "\n----------------------------------------------------------------------------------------------\n";
	cout << "\t\t Dr.Shreyas(child specialist)\n\n";
	cout << "\t\t\t [Timimg] \t\t\t\n";
	cout << "\tMonday To Friday\t\t2PM to 10PM\n";
	cout << "\tSaturday \t\t8AM to 1PM\n";
	cout << "\tSunday \t\t12AM to 9PM\n";
	cout << "\n----------------------------------------------------------------------------------------------\n";
	cout << "\t\t Dr.Saish(eye specialist)\n\n";
	cout << "\t\t\t [Timimg] \t\t\t\n";
	cout << "\tMonday To Friday\t\t8AM to 5PM\n";
	cout << "\tSaturday \t\t10AM to 1PM\n";
	cout << "\tSunday \t\t OFF \n";
	cout << "\n----------------------------------------------------------------------------------------------\n";
	cout << "\nPress any key to Continue";
	_getch();
	system("cls");
}
void appt()
{
	system("cls");
	int choice;
	cout << "\n\n\t\tPress 1 for Dr.Raj \n\n\t\tPress 2 for Dr.Shreyas \n\n\t\tPress 3 for Dr.Saish\n";
	cin >> choice;
	if (choice == 1)
	{
		if (i > 2)
		{
			cout << "APPOINTMENTS FULL FOR TODAY";
			_getch();
		}
		else
		{
			a[i].getr();
			cout << i;
			_getch();
			i++;
		}
	}
	if (choice == 2)
	{
		if (j > 2)
		{
			cout << "APPOINTMENTS FULL FOR TODAY";
			_getch();
		}
		else
		{

			b[j].gets();
			cout << j;
			_getch();
			j++;
		}
	}
	if (choice == 3)
	{
		if (k > 2)
		{
			cout << "APPOINTMENTS FULL FOR TODAY";
			_getch();
		}
		else
		{
			c[k].getsa();
			cout << k;
			_getch();
			k++;
		}
	}
}
void aptshow()
{
	system("cls");
	int choice;
	cout << "\n\n\t\tPress 1 for Dr.Raj \n\n\t\tPress 2 for Dr.Shreyas \n\n\t\tPress 3 for Dr.Saish\n";
	cin >> choice;
	if (choice == 1)
	{
		if (i == 1)
		{
			cout << " NO APPOINTMENTS FOR TODAY";
			_getch();
		}
		else
		{
			system("cls");
			for (int x = 1; x < i; x++)
			{
				cout << "APPOINTMENT NO : " << x;
				a[x].putr();
			}
			_getch();
		}
	}
	if (choice == 2)
	{
		if (j == 1)
		{
			cout << " NO APPOINTMENTS FOR TODAY";
			_getch();
		}
		else
		{
			system("cls");
			for (int x = 1; x < j; x++)
			{

				cout << "APPOINTMENT NO : " << x;
				b[x].puts();
			}
			_getch();
		}
	}
	if (choice == 3)
	{
		if (k == 1)
		{
			cout << "NO APPOINTMENTS FOR TODAY";
			_getch();
		}
		else
		{
			system("cls");
			for (int x = 1; x < k; x++)
			{
				cout << "APPOINTMENT NO : " << x;
				c[x].putsa();
			}
			_getch();
		}
	}
}
int password()
{
	int pass = 12345, a;
	cout << "\n\nENTER PASSWORD : ";
	cin >> a;
	if (pass == a)
		return 1;
	else
	{
		cout << "WRONG PASSWORD";
		_getch();
		return 0;
	}
}
class admin :public RAJ, public SHREYAS, public SAISH
{
public:string adminname;
	  admin() //CONSTRUCTOR//
	  {
		  cin.ignore();
		  cout << "ENTER USER NAME : ";
		  getline(cin, adminname);
	  }
	  ~admin() //DESTRUCTOR//
	  {
		  system("cls");
		  cout << "SESSION CLOSED FOR USER : " << adminname;
		  _getch();
	  }
};
int main()

{
	int p;
	char ch;
	if (password())
	{
		admin ABC;
		do {
			menu();
			cin >> ch;
			if (ch == '1')
				drinfo();
			else if (ch == '2')
				appt();
			else if (ch == '3')
			{
				S[l].sget(); l++;
			}
			else if (ch == '4')
				aptshow();
			else if (ch == '5')
			{
				system("cls");
				if (l == 1)
				{
					cout << "NO STAFF RECORDS AVAILABLE";
					_getch();
				}
				else
				{
					for (int x = 1; x < l; x++)
					{
						cout << "EMPLOYEE NUM " << x << endl;
						S[x].sput();
					}
					_getch();
				}
			}
			else if (ch == '6')
			{
				system("cls");
				if (l == 1)
				{
					cout << "NO STAFF RECORDS AVAILABLE";
					_getch();
				}
				else
				{
					for (int x = 1; x < l; x++)
					{
						cout << "EMPLOYEE NUM " << x << endl;
						S[x].sput();
					}
					cout << "\n\nENTER EMPLOYEE NUM :";
					cin >> p;
					if (p > l - 1 || p < 1)
					{
						cout << "INVALID EMPLOYEE NUM";
						_getch();
					}
					else
						++S[p];
				}
			}
			else if (ch == '7')
			{
				abc = 0;
			}
		} while (abc == 1);
	}
}