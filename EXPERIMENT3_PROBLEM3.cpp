#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
int main()
{
	char array[20];
	int d;
	
	cout << "Enter the DESIRED characters in the array : \n";
	cin>> array;
	
	d =0;
	
	while(array[d] !='\0')
	
	d++;
	cout << "The output of reversed array is:  \n";
		
	for(int a=d-1;a>=0;a--)
	{
		cout << array[a];
	}
	
	cout<< "\nThe size of the array is :"<< d;
	
	getch();
	return 0;
}
