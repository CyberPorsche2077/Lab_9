#include<iostream>
using namespace std;

//Write the function printO() here
char printO(int N,int M){
	if(N<=0 or M<=0){
		cout <<"Invalid input";
	}else{
		for(int i=N;i>0;i--){
			for(int j=M;j>0;j--){
				cout<<'O';
			}
			cout << endl;
		}
	}
	return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
