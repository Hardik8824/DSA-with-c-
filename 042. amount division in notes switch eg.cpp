#include<iostream>
using namespace std;

int main(){
	
	int n10,n20,n50,n100;
	n10=n20=n50=n100=0;
	
	int amount ;
	cout<< "enter the amount :";;
	cin>>amount;
	
	switch(amount){
		case 1: 
		n100=amount/100;
		cout<<n100<<endl;
		amount = amount - n100*100;
		break;
		
		case 2:
		n50=amount/50;
		amount = n50*50;
		cout<<n50<<endl;
		break;
		
		case 3:
		n20=amount/20;
		amount = n20*20;
		cout<<n20<<endl;
		break;
		
		case 4:
		n10=amount/10;
		amount = n10*10;
		cout<<n10<<endl;
		break;
	}
	return 0;
}
