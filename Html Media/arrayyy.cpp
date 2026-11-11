#include<iostream>
using namespace std;

int main()
{
	
	int i,j,row,column;
	cout<<"Enter the values for row and columns :"<<endl;
	cin>>row>>column;
    
	int arr[row][column];
	
	for(i=0; i<row ; i++ )
	{
		for( j=0 ; j < column ; j++)
		{
			cin>>arr[i][j];
		}
	 } 
	 
	 cout<<"The array values are:"<<endl;
	 
	for(i=0; i < row ; i++)
	{
		for ( j=0 ; j< column ; j ++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	
	return 0;
}
