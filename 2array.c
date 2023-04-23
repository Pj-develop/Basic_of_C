#include <stdio.h>
int main(){
	//2 D array initialization
	int arr[2][2]={{10,20},{30,40}};
	// variable for row n column
	int r,c;
	
	for (r=0;r<2;r++){//loop to handle to row
		for (c=0;c<2;c++){//loop to handle to column
			printf("%d\t",arr[r][c]); //to print the array on index value
		}
		printf("\n");//get next line
	}
}
