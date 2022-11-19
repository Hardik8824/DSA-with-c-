#include <iostream>
using namespace std;

int main(){
	
//	char a;
//	cout<<"enter a character :"<<endl;
//	cin>>a;
//	
//	if (a >= 'A' && a <= 'Z'){
//		cout<<"entered no. is uppercase";
//	}
//	else if (a >= 'a' && a <= 'z'){
//		cout<<"entered no. is lowercase";
//	}
//	else if (a >='0' && a<='9'){
//		cout<<"entered no. is digit";
//	}
//	

	char a;
	cin>>a;
	
	if (a>=65 && a<=90){
		cout<<"uppercase";
	}
	else if(a>=97 && a<=122){
		cout<<"lowercase";
	}
	else if (a>=48 && a<= 57){
		cout<<"digit";
	}
	return 0;
}
