#include <iostream>
using namespace std;
void printFibonacci(int n)//function prototype
{
	
	static int n1=0,n2=1,n3;
	/*When static keyword is used, variable or data members or functions can not be modified again. It is allocated for the lifetime of program. Static functions can be called directly by using class name.*/
	if(n>0)
	{
		
		n3=n1+n2;
		
		n1 = n2;
	
		n2 = n3;
		
		cout<<n3<<"";
		
		printFibonacci(n-1);//function call
	}
}
int main()
{
	int n;
	cout<<"\nEnter the number of elements:";
	cin>>n;
	cout<<"Fibonacci Series:";
	cout<<"0"<<"1";
	printFibonacci(n-2);//n-2 because n numbers are alredy printed
	return 0;
}
