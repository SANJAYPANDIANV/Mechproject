#include<iostream>
using namespace std ;
int main ()
{
	int num , n , rev = 0 ;
	cout<<"Enter the Number for reversible number : " ;
	cin>>num ;
	
	while (num > 0)
	{
	    rev = rev * 10 ;
	    rev = rev + (num % 10) ;
	    num = num /10 ;
	}
	cout<<"The reverse number is " << rev ;
}
