#include<iostream.h>
#include<conio.h>

class student
{
		int id;
		char name[30];
		public:
			void get()
			{
				cout<<"Enter id:";
				cin>>id;
				cout<<"Enter Name:";
				cin>>name;
			}
			void put()
			{
				cout<<"id is :"<<id;
				cout<<"Name is :"<<name;
			}
};
int main()
{
	student s1;
	clrscr();
	s1.get();
	s1.put();
	getch();
}