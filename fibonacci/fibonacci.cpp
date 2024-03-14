#include <iostream>

using namespace std;

int fibonacci(int n){
	if(n ==1){
		return 0;
	}else{
		if(n==2){
			return 1;
		}else{
		return fibonacci (n - 1) + fibonacci(n - 2 );
		}
	}
}
main(){
		setlocale(LC_ALL,"portuguese");
	int n;
	cout<<"digite um valor maior que zero: ";
	cin>>n;
	
	cout<<"O termo de : "<<n <<" é "<<fibonacci(n);
	return 0;
}
