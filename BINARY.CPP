#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int found = 0;
	int array[] = {1,2,3,4,5,6,7,8,9};
	int arraySize = sizeof(array) / sizeof(array[0]);
	int first = 0;
	int last = arraySize - 1;
	int sKey;
	cout<<"\nEnter Wanna Search Number : ";
	cin>>sKey;
	while(found == 0 && first <= last)
	{
	 int  mid = (first + last) / 2;
	 //cout<<array[mid];
	   if (sKey == array[mid])
	   {
	       found = 1;
	   } else {
		if(sKey < array[mid])
		{
		 last = mid - 1;
		} else if(sKey > array[mid]) {
		      first = mid + 1;
		}
	   }
	}
	if(found == 1){
	cout<<"\nYour number ("<<sKey<<") is found";
	} else
	cout<<"\nYour number ("<<sKey<<") is not found";

	getch();
}