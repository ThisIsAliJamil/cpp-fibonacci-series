//Created by Ali Jamil

#include <iostream>
using namespace std;
main()
{
	
	int fibonacci,numOne=0,numTwo=1,Result,j;
	cout<<"Select number of fibonacci series view : ";
	cin>>fibonacci;
		for(j=0;j<=fibonacci;j++)
		{
			
			Result = numOne + numTwo;
			cout<<" "<<Result;
			numOne = numTwo;
			numTwo = Result; 
			        	    	      
		}
       
       return 0;
}
