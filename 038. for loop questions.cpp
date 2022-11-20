#include<iostream>
using namespace std;

//int main(){
//	for(int i=0;i<=5;i++){
//		cout<<i<<" ";                              output:0 2 4
//		i++;
//	}


//
//int main(){
//	for(int i=0;i<=5;i--){
//		cout<<i<<" ";                              output:infinite time 0
//		i++;
////	}
//




//int main(){
//	for(int i=0;i<=15;i+=2){
//		cout<<i<<" ";
//		
//		if (i&1){
//			continue;
//		}                              //output:infinite time 0
//		i++;
//	}
//
//}


//int main(){
//	for(int i=0;i<5;i++){
//		for (int j=i;j<5;j++){
//			cout<<i<<" "<<j<<endl;
//		}
//	}
//}






int main(){
	for(int i=0;i<5;i++){
		for(int j=i;j<=5;j++){
			if(i+j ==10){
				break;
			}
			cout<<i<<" "<<j<<endl;
		}
	}
}
