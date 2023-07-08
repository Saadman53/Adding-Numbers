#include<iostream>
using namespace std;

int add(int n1, int n2){
	return n1+n2;
}
int main(){
	int num1, num2;
	cin>>num1>>num2;
	cout<<add(num1,num2);
}