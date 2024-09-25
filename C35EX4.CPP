#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	int lvl[] = {9,10,12,15,20,35,50};
	int emp[] = {3000,2500,1500,1000,400,100,25};
	int sizeLvl = sizeof(lvl) / sizeof(lvl[0]) ;
	int sizeEmp = sizeof(emp) / sizeof(emp[0]) ;
	double empTol = 0, earnTol = 0, lvlTol = 0,
	 avgLvl, below = 0, above =0;

	for(int i = 0; i < sizeLvl; i++)
	{
		lvlTol += lvl[i];
		empTol += emp[i];
	}
		avgLvl = lvlTol / sizeLvl;
		cout<<"\n i.Average Salary Level = "<<avgLvl<<" in thousand of dollors";
	for(int j = 0; j < sizeEmp; j++)
	{
	 if(lvl[j] < avgLvl)
	 {
		below += emp[j];
	 } else
	 {
		above += emp[j];
	 }
		earnTol += lvl[j] * emp[j];
	}
	cout<<"\n ii.Employee below the average Level = "<<below<<" persons";
	cout<<"\n    Employee above the average Level = "<<above<<" persons";
		int individual = earnTol / empTol;
	cout<<"\n iii.Average Salary earn by individual = "<<individual<<" in thousand of dollors";

	getch();

}