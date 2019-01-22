// program to find the factorial of large numbers
//can calculate upto 2000!
//for calculating higher numbers, increase the size of MAX
#include<bits/stdc++.h>
#define MAX 6000
using namespace std;

int prod(int *a,int n,int size)
{
// calculating the product of digits in array with a number.
	int i,carry=0,product=0;                                        				 //initializing carry and product to 0
	for(i=0;i<size;i++)
	{
		product=carry+(*(a+i))*n;                                                    //calculating the product
		*(a+i)=product%10;                                                           //storing the unit place digit in array
		carry=product/10;                                                            //storing carry
	}
	while(carry!=0)
	{
		*(a+i)=carry%10;                                                              //appending remaining carry to array
		carry=carry/10;
		i=i+1;
		size++;
	}
	return size;                                                                       //returning size of the changed array
}
void fact(int n)
{
//calculates the factorial by storing digits in array and multiplying them with next number.
	int a[MAX]={1};                                               				 	//intializing array to 1
	int i,size=1;                                                 					//size stores the size of array
	for(i=2;i<=n;i++)
	{
		size=prod(a,i,size);                                         				//mutliplying digits with next number
	}
	for(i=size-1;i>=0;i--)                                           				//prints the result and number of digits in result
	cout<<a[i];
	cout<<endl<<size;
	
}
int main()
{
//driver function
	int number;
	cout<<"enter the number:"<<endl;                                           
	cin>>number;                                                                    //takes input
	fact(number);                                                                   //calls fact() function to find factorial
	return 0;
}
