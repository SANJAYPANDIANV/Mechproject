#include<iostream>
#include<math.h>
using namespace std ;
	
int main()
{
	int x , sum = 0 , num ;
	
	cout<<"Enter the number of terms : " ;
	cin>>num ;

	cout<<"Enter the number :";
	cin>>x;
	
	for ( int i = 1 ; i <= num ; i ++)
	{
		sum = sum + pow(x,i)/(i);
	   
		
	}
	cout<<"\n Sum of the series : \n " ;
	cout<<sum ;
	return 0 ;
	
}
