#include <iostream>
using namespace std;

int main(){
	for(int i = 0; i < 10; i++){
		if(i == 3){
			continue;
		}
		cout << i+1;
		cout << " - ";
	}
	cout << "Looping Selesai" << endl;
 }
