#include<iostream>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int a, b;
	cout<<"Enter numbers\n";
	cin>>a>>b;
	swap(&a, &b);
	cout<<a<<" "<<b<<"\n";
	return 0;
}
