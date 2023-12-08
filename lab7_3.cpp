#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char a = 'A', z = 'Z';
	if(x <= z && x >= a){
		if(x == a){
			return 'Z';
		}
		else
		{
			x -= 1;
			return x;
		}
		
	
		
	}else{
		return 48;
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
