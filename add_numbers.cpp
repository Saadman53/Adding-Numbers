#include<iostream>
using namespace std;

float add(float n1, float n2){
	return n1+n2;
}
int main(){
	float num1, num2;
	cin>>num1>>num2;
	cout<<add(num1,num2);
}