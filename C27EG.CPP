#include<iostream.h>
#include<conio.h>
struct part
{
 int modelNumber;
 int partNumber;
 float cost;
};
void main(){
	   clrscr();
	   part part1 = { 6244, 373, 217.55};
	   part part2;
	   cout<<"\nModel "<<part1.modelNumber;
	   cout<<",part " <<part1.partNumber;
	   cout<<",cost $"<<part1.cost;

	   part2 = part1 ;

	   cout<<"\nModel "<<part2.modelNumber;
	   cout<<",part " <<part2.partNumber;
	   cout<<",cost $"<<part2.cost;

	   getch();

}