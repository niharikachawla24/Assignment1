//Question 4 (a)
#include <iostream>
using namespace std;
int main(){
	int A[5]={1,2,3,4,5};
	for(int i=0; i<5/2; i++){
		int temp= A[i];
		A[i]=A[5-i-1];
		A[5-i-1]=temp;
	}
	
	cout<<"Array after reversing"<<endl;
	for(int i=0; i<5; i++){
		cout<<A[i]<<" ";
	}
return 0;
}

//Question 4 (b)
#include <iostream>
using namespace std;

int main(){

int mat1[2][3]= {1,2,3,4,5,6};
int mat2[3][2]= {1,2,3,4,5,6};
int finalmat3[2][2]={};

for(int i=0; i<2; i++){
	for(int j=0; j<2;j++){
		for(int k=0; k<3; k++){	
		finalmat3[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
}

for(int i=0; i<2;i++){
	for(int j=0; j<2;j++){
		cout<<finalmat3[i][j]<<"  ";
	}
	cout<<endl;
}

return 0;
}

//Question 4 (c)
#include <iostream>
using namespace std;

int main(){
	int A[2][3]={1,2,3,4,5,6};
	int AT[3][2]={};
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			AT[j][i]= A[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout<<AT[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
