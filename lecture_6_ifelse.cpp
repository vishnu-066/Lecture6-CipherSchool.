//// Calculating percentage and Grade for student marks.
//
#include<iostream>
using namespace std;
int main(){
	int stu_marks;    // marks is out of 600.
	int total_mark=600;
	cout<<"Enter total marks: ";
	cin>>stu_marks;
	float percentage =(static_cast<float>(stu_marks)/total_mark)*100;    // type casted into float using "static_cast<float>"
	
	
	if(percentage>90){
		cout<<"O grade"<<endl;
	}
	else if(percentage>80){
		cout<<"A grade"<<endl;
		
	}
		else if(percentage>70){
		cout<<"B grade"<<endl;
		
	}
		else if(percentage>60){
		cout<<"c grade"<<endl;
		
	}
	else{
		cout<<"Marginal Pass"<<endl;
	}
	return 0;
}






