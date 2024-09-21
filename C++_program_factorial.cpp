#include<iostream>
using namespace std;
int fact( int num);
int main()
{
	int ans , n ;
	 
	cout<<"Enter the number for factorial :";
	cin>>n;
	
	ans = fact (n);
	
	cout<<"The factorial of "<< n << "is "<< ans ;
	return 0;
	 

}
int fact(int num)
{
	if( num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		return num * fact(num - 1);
	}
}
