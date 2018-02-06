#include<iostream>
using namespace std;

//º¯ÊıÄ£°å
template<typename  T>
T max(const T a,const T &b){
	return a>b?a:b;
}

int main(){
	int a=2;
	int b=3;
	int ret=max(a,b);
	cout<<ret<<endl;
	return 0;
} 
