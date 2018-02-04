#include<iostream>
#include<math.h>
using namespace std;

double canbachai(double n);
int main()
{
	int n;
	char h;
	do
	{
		cout<<"nhap so n: ";
		cin>>n;
		cout<<" can bac 2 "<<n<<" is "<< canbachai(n)<<endl;
		cout<<"continue? (y/n): ";
		cin>>h;
	}
	while(h != 'n');
	return 0;
}
double canbachai(double n)
{
	return sqrt(n);	

}
