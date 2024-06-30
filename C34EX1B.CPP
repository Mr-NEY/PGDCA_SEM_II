#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[50];
	for(int i = 0; i < 50; i ++){
		arr[i] = (i+1) * 2;
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\t";
	}

	getch();
}