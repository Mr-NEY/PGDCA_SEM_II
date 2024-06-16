#include <iostream.h>
#include <conio.h>
struct phone
{
	int areaCode;
	int exchangeCode;
	int number;
};
void main()
{
	clrscr();
	phone y;
	phone m = {212,767,8900};
	cout<<"\nYour Code,Exchange and Number : ";
	cin>>y.areaCode>>y.exchangeCode>>y.number;

	cout<<"\nMy Number is	"<<"("<<m.areaCode<<")"<<" "<<m.exchangeCode<<"-"<<m.number;
	cout<<"\nYour Number is	"<<"("<<y.areaCode<<")"<<" "<<y.exchangeCode<<"-"<<y.number;

	getch();

}