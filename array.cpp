#include <iostream>
#include<iomanip>
using namespace std;
void display(int salary[],int num);
int cal_bonus(int salary);
int main()
{   int num;
	cout << "Enter number of person : ";
	cin >> num;
	int * salary = new int[num];
	for(int i = 0 ; i<num ;i++)
	{   cout << "Enter the salary " << i+1 << ":";
	    cin >> salary[i];
	}
	display (salary,num);
    return 0;
}

void display(int salary[],int num)
{  
    int  bonus;
	cout << setw(50)<<setfill('-')<<(' ') <<endl;
    cout << "There are" << num << "persons" << endl;
	for(int i = 0 ; i<num ;i++)
	{   bonus = cal_bonus(salary[i]);
		cout << "The salary for person" <<i+1 << "=" << salary[i] <<"and Bonus = "<< bonus << endl;
	}
	cout << setw(50)<<setfill('-')<<(' ') <<endl;
}

int cal_bonus(int salary)
{   int bonus = 0;
    bonus = salary*2;
    return bonus;
}
