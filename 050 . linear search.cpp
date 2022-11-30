#include <iostream>
using namespace std;

bool search(int arr[],int size , int key){
	
	for(int i = 0;i<size ; i++){
		if (arr[i] == key){
			return 1 ;
		}
	}
	return 0;
}

int main (){
	int arr[10] = { 1,2,3,8,9,0,-6,-8,69};
	cout<<"Enter the elment to search for "<<endl ;
	int key;
	cin >> key;
	
	bool found = search(arr , 10 , key);
	if(found){
		cout<<"Key is present "<<endl;
	}
	
	else{
		cout<<"key is absent"<<endl;
	}
	
	return 0;
}
