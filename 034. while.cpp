// find sum of n numbers

//#include <iostream>
//using namespace std;
//
//int main(){
//	
//	int n;
//	cin>>n;
//	int i=1;
//	int sum=0;
//	while(i<=n)
//	{
//		sum=sum+i;
//		i=i+1;
//	}
//	cout<<"VALUE OF SUM IS :"<<sum;
//	
//}


// find the sum of all even numbers from one to n


//#include <iostream>
//using namespace std;
//
//int main(){
//	
//	int n;
//	cin>>n;
//	int i=0;
//	int sum=0;
//	while(i<=n)
//	{
//		sum=sum+i;
//		i=i+2;
//	}
//	cout<<"VALUE OF SUM IS :"<<sum;
//	
//}


// determine prime number 
#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int i=2;
	
	while(i<n){
		if(n%i==0){
			cout<<"non prime for "<<i<<endl;
		}
		else{
			cout<<"prime for "<< i<<endl;
		}
		i=i+1;
	}
	
}


