#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	cout<<"Enter rows and colums:";
	cin>>rows>>cols;
	int **matrix=new int*[rows];
	for(int i=0;i<rows;i++)
	matrix[i]=new int[cols];
	for(int i = 0; i < rows; i++)
	{
		for(int j=0;j<cols;j++)
		{
			matrix[i][j]=i*cols+j+1;
		}
	}
	cout<<"\nMatrix:\n";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
			cout<<endl;
		
	}
	for(int i=0;i<rows;i++)
	delete[]matrix[i];
	return 0;
}
