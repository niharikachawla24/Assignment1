#include <iostream>
using namespace std;

int main(){
	int A[2][3]= {1,2,3,4,5,6};
	int sumc=0;
	int sumr=0; 
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			sumr += A[i][j];
		}
		cout<<"Sum of row "<<i+1<<" is "<<sumr<<endl;
		sumr=0;
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			sumc += A[j][i];
		}
	    cout<<"Sum of column "<<i+1<<" is "<<sumc<<endl;
	    sumc=0;
	}
	
	
	return 0;
}
