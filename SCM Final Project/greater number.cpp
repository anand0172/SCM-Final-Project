#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter second number:";
	cin>>b;
	if(a>b){
		cout<<"first number"<< a <<"is larger";
	}
	else if(a<b){
		cout<<"second number"<< b <<"is larger";
	}
	else{
		cout<<"invalid";
	}
	return 0;
}
