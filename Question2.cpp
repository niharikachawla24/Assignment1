#include <iostream>
#include <climits>
using namespace std;

int main(){
int A[]={1,1,2,1,1,3,4,3,5,6,7,2,4,5};
int size= sizeof(A)/sizeof(A[0]);
for(int i=0; i<size; i++){
	for(int j=i+1; j<size; j++){
		if(A[j]==A[i]){
			A[j]=INT_MIN;
		}
	}
}
for(int i=0; i<size; i++){
	if(A[i]==INT_MIN){
		for(int j=i; j<size-1;j++){
			A[j]=A[j+1];
		}
		size--;
		i--;
	}
}

cout<<"Array ater deleting duplicate elements ";
for(int i=0; i<size;i++){
	cout<<A[i]<<" ";
}

return 0;
}

