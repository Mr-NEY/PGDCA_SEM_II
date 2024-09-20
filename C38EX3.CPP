#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	int mark[5][4] = {{50,55,60,65},{63,34,67,86},{45,56,76,56},
				{76,66,88,99},{76,78,67,78}};
	for(int i = 0; i < 5; i++){
	 if (mark[i][0] >= 50 && mark[i][1] >= 50 &&
		mark[i][2] >= 50 && mark[i][3] >= 50)
		{
			cout<<"\nStudent "<<(i + 1)<<" is PASS";
		} else {
			cout<<"\nStudent "<<(i + 1)<<" is FAIL";
		}
	}

	getch();
}