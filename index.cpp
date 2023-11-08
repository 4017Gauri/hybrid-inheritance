#include<iostream>
using namespace std;
class student{
	protected:
		char name[20];
		int roll_no;
	public:
		void getdata();
};
void student :: getdata(){
	cout<<"\n Enter the name of student\n";
	cin>>name;
	cout<<"\n Enter the roll number of student\n";
	cin>>roll_no;
}
class marks : public student{
	protected:
		int sub1, sub2, sub3, sub4, sub5;
	public:
		void getmarks();
};
void marks :: getmarks(){
	cout<<"\n Enter the marks of sub-1\n";
	cin>>sub1;
	cout<<"\n Enter the marks of sub-2\n";
	cin>>sub2;
	cout<<"\n Enter the marks of sub-3\n";
	cin>>sub3;
	cout<<"\n Enter the marks of sub-4\n";
	cin>>sub4;
	cout<<"\n Enter the marks of sub-5\n";
	cin>>sub5;
}
class incentives : public marks{
	protected:
		int inc;
	public:
		void getincentives();
};
void incentives :: getincentives(){
	cout<<"\n Enter the incentives \n";
	cin>>inc;
}
class result : public marks : public incentives{
	int total;
	float per;
	public:
		void cal();
		void display();
};
void result :: cal(){
	total = sub1+sub2+sub3+sub4+sub5;
	per = total/5.0;
};
void result :: display(){
	cout<<"\n Details of student are as follows:\n";


}












































