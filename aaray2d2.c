#include <stdio.h>
int main(){
	//2 D array initialization
	int arr1[2][2]={{10,20},{30,40}};
	int arr2[2][2]={{10,20},{30,40}};
	int arr3[2][2];
	// variable for row n column
	int r,c;
	int s=0;
	for (r=0;r<2;r++){//loop to handle to row
		for (c=0;c<2;c++){//loop to handle to column
			printf("%d\t",arr1[r][c]+arr2[r][c]);
			arr3[r][c]=arr1[r][c]+arr2[r][c];
			//printf("\n%d Iternation: %d",c,s);
			 //to print the array on index value
		}
		printf("\n");//get next line
	}
		printf("SUM IS : %d\n",s);

		for (r=0;r<2;r++){//loop to handle to row
		for (c=0;c<2;c++){//loop to handle to column
			printf("%d\t",arr3[r][c]);
			}
		printf("\n");//get next line
	
	

}
}
