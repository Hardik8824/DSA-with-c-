#include<iostream>
using namespace std;

int sumarray(int arr[], int array_size){
	
	int sum =0;
	for (int i=0;i<=array_size;i++){
		
		sum = sum + arr[i];
		
	}
	return sum ;
	
}

int main(){
	
	int arr[] = {1,2,3,4,-20};
	int array_size = 5;
	cout << "sum of the array is : "<< sumarray(arr,array_size);
	
	
	
}
