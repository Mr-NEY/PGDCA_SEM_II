#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[100];
	for(int i = 0; i < 50; i ++){
		arr[i] = (i+1) * 2;
		cout<<"\narr["<<i<<"] = "<<arr[i];
	}

	getch();
}