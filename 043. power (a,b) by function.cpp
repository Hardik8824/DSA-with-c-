#include <iostream>
using namespace std;

//int power (){
//	
//	int a,b;
//	cin>>a>>b;
//	
//	int ans =1;
//	
//	for(int i=1;i<=b;i++){
//		ans=ans*a;
//	}
//	return ans ;
//}
//
//int main (){
//	
//	int ans  = power();
//	cout<<"answer is :"<<ans<<endl;
//	
//	int fri  = power();
//	cout<<"answer is :"<<fri<<endl;
//	
//	int sat  = power();
//	cout<<"answer is :"<<sat<<endl;
//}

int power(int num1,int num2){
	
	int ans  = 1;
	
	for(int i=1 ; i<=num2; i++){
		ans = ans *num1;
	}
	return ans ;
}

int main(){
	int a,b;
	cin>>a>>b;
	int ans = power(a,b);
	cout<<"answer is "<<ans <<endl;
	
}
