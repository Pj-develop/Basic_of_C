//conditional Statement & Nested If statemts

#include <stdio.h>
void main(){
	int a;
	printf("\n Enter the Number= ");
	scanf("%d",&a);
//	printf("\n Value of Positive +ve: %d",a);
//	if(a>=0){
//		printf("POSITIVE");
	if (a>=60 && a<100){
		printf("FIRST");
		if(a>90){
			printf("OOOOOOOOOOOOOOOOOOOO");
		}
		else{
			printf("LY");
		}
	}
	else if (a>=45 && a<60){
		printf("SECOND");
	}
	else{
		printf("FAIL");
	}
	
	}
	
// IF ELSE USED FOR RANGE,CASE,DIGIT,
// SWITCH : FOR CHECKING CONSTANT

//switch (exp) char or int{
//case 1<constant>:
//statements;
//case 2<constant>:
//statements;
//case 3<constant>:
//statements;
//break;
//case 4<constant>:
//statements;
//break;
//}


//TOOLS : GUI L EXCEK, SPSS, SAS, Rstudio
//		VISUALIZATION: TABLUEA, MICROSTRATEGY
//		CODING BASED: SAS, R



