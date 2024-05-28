#include<iostream>
using namespace std;
class studentCard{
	private:
	  string studentName;
	  string fatherName;
	  int rollNo;
	  int Class;
	public:
	void setstudentName(string name) {
		studentName = name;
	} 
	void setfatherName(string father) {
		fatherName = father;
	} 
	void setrollNo(int rollno) {
		rollNo = rollno;
	}
	void setClass(int c) {
		Class = c;
	}
	void display() {
		cout<<"Name: "<<studentName<<endl;
		cout<<"Father Name: "<<fatherName<<endl;
		cout<<"Class: "<<Class<<endl;
		cout<<"Roll No.: "<<rollNo<<endl;
	}
};
int main() {
	studentCard S1;
	cout<<"***********************Card of Student # 1*************************"<<endl;
	S1.setstudentName("Maimoona");
	S1.setfatherName("Muhammad Munir");
	S1.setClass(14);
	S1.setrollNo(30);
	S1.display();
	studentCard S2;
	cout<<"***********************Card of Student # 2*************************"<<endl;
	S2.setstudentName("Zainab");
	S2.setfatherName("Sarim");
	S2.setClass(13);
	S2.setrollNo(10);
	S2.display();
	studentCard S3;
	cout<<"***********************Card of Student # 3*************************"<<endl;
	S3.setstudentName("Maha");
	S3.setfatherName("Saad");
	S3.setClass(10);
	S3.setrollNo(45);
	S3.display();
	studentCard S4;
	cout<<"***********************Card of Student # 4*************************"<<endl;
	S4.setstudentName("Janat");
	S4.setfatherName("Maaz");
	S4.setClass(6);
	S4.setrollNo(20);
	S4.display();
	return 0;
}
