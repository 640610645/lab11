#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	int i = 0,a,b,c,d,f; 
	char grade[] = {'A','B','C','D','F'};
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do{
		cout << "Student [" << i+1 << "]: " ;
		cin >> grade; 
		if(grade[i] == 'A'){
			a = count[0];
			count[0]++;
		}else if(grade[i] == 'B'){
			b = count[1];
			count[1]++;
		}else if(grade[i] == 'C'){
			c = count[2];
			count[2]++;	
		}else if(grade[i] == 'D'){
			c = count[3];
			count[3]++;
		}else if(grade[i] == 'F'){
			c = count[4];
			count[4]++;
		}else if(grade[i] == '0') break;		
		else{ 
			cout << "Wrong input. Please input again.";
		}
	}while(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F' );
	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	
		
	
	return 0;
}
