#include<iostream>
using namespace std;
class matrix{
	int a[3][3];
	public:
		void get(void);
		void put(void);
		matrix sum(matrix,matrix);
};
void matrix::get(void)
{
	int i,j;
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
}
matrix matrix::sum(matrix A,matrix B)
{
	matrix S;
	int i,j;
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			S.a[i][j]=A.a[i][j]+B.a[i][j];
		}
	}
	return S;
}
void matrix::put(void)
{
int i,j;
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int main()
{
	matrix m1,m2,m3;
	cout<<"enter the elements of matrix A"<<endl;
	m1.get();
	cout<<"enter the elements of matrix B"<<endl;
    m2.get();
    m3=m3.sum(m1,m2);
   	cout<<" the elements of matrix A"<<endl;
   	m1.put();
	cout<<" the elements of matrix B"<<endl;  
	m2.put();
	cout<<" the elements of matrix S"<<endl; 
	m3.put();
}
