#include<iostream>
#include <math.h>
using namespace std;

int main (){
	
	int a,b;
	
	cout<<"ENTER YOUR FIRST NUMBER :";
	cin>>a;
	
	cout<<"ENTER YOUR SECOND NUMBER :";
	cin>>b;
	
	char op;
	cout<<"ENTER THE OPERAION YOU WANT TO PERFORM :";
	cin>>op;
	
	switch(op){
		
		case '+': cout<< (a+b) <<endl;
				break ;
		
		case '-': cout<<(a-b) <<endl;
				break ;
		
		case '*': cout<< (a*b)<<endl;
				break ;
				  
		case '/': cout<< (a/b)<<endl;
				break ;
				  
		case '%': cout<< (a%b)<<endl;
				break ;
				  
		default : cout<<" please enter the valid operatiooooooon";
				break ;		  
	}
	return 0;
	
}

