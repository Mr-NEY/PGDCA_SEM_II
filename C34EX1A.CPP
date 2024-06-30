#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[100];
	for(int i = 0; i < 100; i ++){
		arr[i] = i;
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\t";
	}

	getch();
}