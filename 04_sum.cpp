#include<iostream>
using namespace std;

int main(){
	int a[10], s = 0;
	cout<<"Enter 10 numbers\n";
	for(int i = 0; i < 10; ++i){
		cin>>a[i];
	}
	for(int i = 0; i < 10; ++i){
		s+=a[i];
	}
	cout<<"Sum = "<<s<<"\n";
	return 0;
}
