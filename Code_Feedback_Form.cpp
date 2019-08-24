#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
class feedback{char option[15];
	char name[40];
	char last[40];
	char email[50];
	char id[10];
	int review[8];
	char cmmnt[100];
	char other[100];
	public: 
	void input()
	{
		system("cls");
		cout<<"\t\t\t\t\tTRAVEL BUDDY";
		cout<<"\n\t\t\t\t\tFEEDBACK FORM";
		cout<<"\n\n\t\tName  :";
		cin>>name;
		cout<<"\t\tLast Name:";
		cin>>last;
		cout<<"\t\tEmail    :";
		cin>>email;
		cout<<"\t\tTravel ID: ";
		cin>>id;
		cout<<"\n\t\t\tTrip Feedback\n";
			cout<<"Give feedback as per following(1-4): \n\n1.Excellent\n2.Good\n3.Satisfactory\n4.Poor\n";
		for(int j=1,i=0;j<8,i<8;j++,i++)
{
	switch(j)
		{
			case 1:{cout<<"Your overall experience\n";cin>>review[i];	break; }
			case 2:{cout<<"The comprehensiveness,clarity,and accuracy of the information provided on our website\n";cin>>review[i];break;}
			case 3:{cout<<"The booking process\n";cin>>review[i]; break;}
			case 4:{cout<<"The transportation vehicle\n";cin>>review[i]; break;}
			case 5:{cout<<"Equipment you were provided with, if applicable:\n";cin>>review[i];break;}
			case 6:{cout<<"Trip safety:\n";cin>>review[i];break;}
			case 7:{cout<<"Meals/lunch box that was included in your trip:\n";cin>>review[i];break;}
			case 8:{cout<<"This trip in terms of value for money:\n";cin>>review[i];break;}
			 }
			 
			  if(review[i]<1||review[i]>4) {cout<<"Invalid Input , Error in line "<<i+1; exit(0);
			 }
		}

		cout<<"\nOther comments or suggestions";
		cin>>cmmnt;
		Sleep(500);
		cout<<"\nWhat other trips would you like to see us organize?";
		cin>>other;
		Sleep(500);
		
		
	
	}
	void print(){		Sleep(500);
  			system("cls");		Sleep(500);
		cout<<"\t\t\t\t\tTRAVEL BUDDY";
		cout<<"\n\t\t\t\t\tFEEDBACK FORM";
		cout<<"\n\nName:"<<name<<" "<<last<<endl;
		cout<<"Email:"<<email<<endl;
		cout<<"Travel ID";
		cout<<id<<endl;
		cout<<"\tTrip Feedback\n";	
	for(int j=1,i=0 ;j<8,i<8;j++,i++)
{
	switch(j)
		{
			case 1:cout<<"Your overall experience\n";break;
			case 2:cout<<"The comprehensiveness,clarity,and accuracy of the information provided on our website\n";break;
			case 3:cout<<"The booking process\n"; break;
			case 4:cout<<"The transportation vehicle\n"; break;
			case 5:cout<<"Equipment you were provided with, if applicable:\n";break;
			case 6:cout<<"Trip safety:\n";break;
			case 7:cout<<"Meals/lunch box that was included in your trip:\n";break;
			case 8:cout<<"This trip in terms of value for money:\n";break;
		}

		
			if(review[i]==1)
 				strcpy(option,"Excellent *****");
			else if(review[i]==2)
				strcpy(option,"Good ****");	
			else if(review[i]==3)
				strcpy(option,"Satisfatory ***");
			else if(review[i]==4)
				strcpy(option,"Poor **");
			else strcpy(option,"Invalid Input");
		cout<<option<<endl<<"\n";}


		cout<<"Other comments or suggestions  ";
		cout<<cmmnt<<endl;
	
		cout<<"What other trips would you like to see us organize?  ";
		cout<<other<< endl;
	
	
		
			Sleep(500);	Sleep(500);	Sleep(500);	Sleep(500);
}
};			
void loading()
{
    for(int i=1;i<=50;i++)
    {
	system("cls");
    int delay;
    cout<<"\n\n\n\n\n\n\t\t\t\t  Loading "<<'\n'<<'\t'<<'\t';
    for(int j=1;j<=i;j++)
    cout<<"²";
    cout<<"\n\n\t "<<2*i<<"%";
    if( i > 1 && i < 20)
    cout<<"\n\n\tConnecting to server";
    else if( i > 20 && i<40)
    cout<<"\n\n\tEstabilishing Network";
    else if(i >40 && i<48)
    cout<<"\n\n\tOpening Feedback form";
    else cout<<"\n\n\tComplete. Press Enter to Continue ";
    Sleep(150 - i*3);
    }
}
int main()
{
    fstream myfile;
    feedback feed;
   loading();
    myfile.open ("example.txt");
    feed.input();
    myfile.write((char*)&feed,sizeof(feed));
	myfile.read((char*)&feed,sizeof(feed));
feed.print();
    myfile.close();
    return 0;	
}
