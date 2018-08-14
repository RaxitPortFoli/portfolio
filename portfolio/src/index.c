#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double result1, result2;
	double s1=1.0, s2=1.0, s3=3.0, s4=1.0;

	for(int i=0; i<2; i++)
	{

	result1=s1+s2;
	result2=s3-s4;

	cout<<"\n\nComparaing the results of expressions : ";
	
	cout<<setprecision(2)<<fixed;
	cout<<s1<<" + "<<s2<<" And "<<s3<<" - "<<s4<<endl<<endl;
	cout<<"\n**** Result: \n";
	cout<<"\nVariable#1 = "<<result1;
	cout<<"\nVariable#2 = "<<result2;
	

	if(result1==result2)
		cout<<"\n\nBoth results are equal\n";
	else 
	{
		cout<<"\n\nBoth have equal values but the computer detemines that they are not.";
		cout<<"\nBoth results are not equal due to Truncation or Round-off\n";
	}
	//Trying more complex values
	s1=4.76;
	s2=2.65;  
	
	s3=22.65;
	s4=15.24;
	cout<<"\n\t**** Comaparaing with complex values ****\n";
	}

	cout<<endl<<endl;
	system ("pause");
	return 0;
}
