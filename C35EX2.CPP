#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[] = {1, 2, 3, 3, 2, 1, 5 };
	int  n = 7;
	int a = 1;

	for(int i = 0; i < n/2; i++){
		if( arr[i] != arr[n - i - 1]){
			a = 0;
		} else{
		a = 1;
		}
	}

	if (a == 1){
		cout<<"Array is Palindrome";
	   }
	  else
	  cout<<"Array is not Plaindrome";

	getch();
}