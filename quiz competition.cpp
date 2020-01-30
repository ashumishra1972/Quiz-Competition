#include<iostream>
#include<stdio.h>
#include<string.h>
int count=0;
int c=count*100;
using namespace std;
bool verify(string k)
{
	for(int i=0;i<8;i++)
	if(isdigit(k[i])==true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int question(int n)
{
	int m;
	cout<<"Q1.What Is Capital Of India?"<<endl;
	cout<<"1.Delhi\n2.Mumbai\n3.Kolkata\n4.Vadodara\n"<<endl;
	cout<<"Your Answer Here ->";cin>>m;
	if(m==1)
	{
n=n+100;

	}
	else
	{
n=n-50;

}
count++;
cout<<endl;
cout<<"Q2. Which is the Smallest States in India?\n";
cout<<"1) Uttarakhand\n";
cout<<"2) Manipur\n";
cout<<"3) Goa\n";
cout<<"4) Assam\n\n";
	cout<<"Your Answer Here ->";cin>>m;
	if(m==3)
	{
n=n+100;
	}
	else
	{
n=n-50;
}
count++;
cout<<endl;
cout<<"Q3) When do we celebrate our Independence Day?"<<endl;
cout<<"1) 15th January\n";
cout<<"2) 26th January\n";
cout<<"3) 26th August\n";
cout<<"4) 15th August\n\n";
	cout<<"Your Answer Here ->";cin>>m;
	cout<<endl;
if(m==4)
	{
n=n+100;
count++;
	}
	else
	{
n=n-50;
count++;
}
cout<<"Q 4.How many players are there in a cricket team?\n";
cout<<"1. 9\n";
cout<<"2. 10\n";
cout<<"3. 11\n";
cout<<"4. 12\n\n";
	cout<<"Your Answer Here ->";cin>>m;
if(m==3)
	{
n=n+100;
count++;
return n;
	}
	else
	{
n=n-50;
count++;
return n;

}
}

int main()
{ string str;
	int age,sc=0;
	char name[20],random;
		cout<<"*************************DESIGNED BY :- ASHUTOSH MISHRA************************"<<endl<<endl;
	cout<<"**************************WELCOME TO THE QUIZ***********************************"<<endl<<endl;
	cout<<"Enter Your Name\n"<<endl;
	cout<<"-> ";gets(name);
	cout<<endl;
	cout<<"Enter Your Age\n"<<endl;
	cout<<"->";getline(cin,str);
	cout<<endl;
	while(verify(str)==0)
	{
	
	if(verify(str)==0)
	{
		cout<<endl;
		printf("!!!!Please Enter The Age In Number(10-90) Years!!!!\n\n");
		cout<<"Enter Your Age ";
	getline(cin,str);
	cout<<endl;
	}
}
cout<<"*********************************GAME RULES*************************************\n\n";
cout<<"1.Each correct answer will be awarded 100 marks\n\n";
cout<<"2.Each incorrect answer will be deducted 50 marks\n\n";
cout<<"********************************************************************************\n";
	cout<<"Are You Ready To Play The Quiz('y'|'n')\n"<<endl;
		cout<<"->";cin>>random;
		cout<<endl;
	if(random=='y'||'Y')
	{
cout<<"**************************************Best of Luck*****************************"<<endl<<endl<<endl;
cout<<"**************************************Here The Quiz Begins*********************"<<endl<<endl<<endl;
	}
	else
	{
		cout<<"Good Bye"<<endl;
	return 0;
	}
	int k=question(sc);
	cout<<endl;
	if(k>=c/2)
	{
		cout<<"*****************************************************************************\n";
		cout<<"*********************CONGRATS YOU HAVE PASSED THE QUIZ**********************\n";
		cout<<"****************************************************************************\n\n";
		
			cout<<"YOU HAVE SCORED -> "<<k;cout<<" OUT OF "<<count*100;
	}
	else
	{
		cout<<"BETTER LUCK NEXT TIME"<<endl<<endl;
			cout<<"YOU HAVE SCORED -> "<<k;cout<<" OUT OF "<<count*100;
	}
}
