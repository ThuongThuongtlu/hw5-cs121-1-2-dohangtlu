#include<iostream>
#include<math.h>
using namespace std;
bool isleapYear(int year);
int main()
{

	int year;
	char a;
	do 
	{
	cout << " nhap nam " << endl;
	cin >> year;
	cout << year << " is " << isleapYear(year)<<endl;
	cout<<"continue? (y/n): ";
	cin>>a;
	
	}

    while (a!= 'n');
    return 0;
    
}
bool isleapYear(int year)
{ 
return ((year%4==0)&&(year%100!=0)||(year%400==0));
}
