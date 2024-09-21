#include<iostream>
using namespace std;
int main()
{
	int arr1[10][10] , arr2[10][10] ;
	for ( int i = 0 ; i < 3 ; i++ )
	{
		for ( int j = 0 ; j < 3 ; j++ )
		{
			cout<<"Enter the first matrix ";
			cin>>arr1[i][j];
		}
	}
	for ( int i = 0 ; i < 3 ; i++ )
	{
		for ( int j = 0 ; j < 3 ; j++ )
		{
			cout<<"Enter the second matrix ";
			cin>>arr2[i][j];
		}
	}
	for ( int i = 0 ; i < 3 ; i++ )
	{
		for ( int j = 0 ; j < 3 ; j++ )
		{
			cout<<arr1[i][j];
			
		
		}
		cout<<"\n";
	}
	for ( int i = 0 ; i < 3 ; i++ )
	{
		for ( int j = 0 ; j < 3 ; j++ )
		{
			cout<<arr2[i][j];
			
	}
	cout<<"\n";
		}
		
	return 0;
}
