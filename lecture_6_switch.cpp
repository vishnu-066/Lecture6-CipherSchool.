#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the number : ";
	cin>>a;
	switch(a){
		case 1:
			cout<<"HI"<<endl;
			break;
			case 2:
				cout<<"HELLO"<<endl;
				break;
				case 3:
					cout<<"How are you ?"<<endl;
					break;
					default:
						cout<<"You are out of bound"<<endl;
			
	}
	return 0;
}
