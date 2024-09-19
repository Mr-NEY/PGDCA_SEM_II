#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	char key = 'Y';
	char array[] = {'H','O','W',' ','A','R','E',' ','Y','O','U'};
	int arraySize = sizeof(array) / sizeof(array[0]);
	int index;

	for(int i = 0; i < arraySize; i++){
		if(array[i] == key){
			index = i;
			break;
		}
	}
	cout<<"\nSearch Key 'Y' is found at index : "<<index;
	getch();
}
