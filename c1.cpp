#include<iostream>
using namespace std;
char a='m';
static int b=50;
int main()
{
	char a='5';
	cout<<"the static variable:"<<::b<<endl;
	cout<<"/n the global variable:"<<a<<endl;
	cout<<"/n the global variable:"<<::a<<endl;
	return 0;
}

