#include<stdio.h>
int stack[100],top = -1,size;

int main(){
	printf("Enter size of the stack: ");
	scanf("%d",&size);
	//menu driven program
	int choice;
	
    while (1){
    	printf("Press 1. push 2. pop 3. peek 4. Display and any other to exit: ");
	scanf("%d", &choice);
	if (choice == 1){
		//push operation
	}
	else if(choice == 2){
		//pop operation
	}
	else if(choice == 3){
		//display
	}
	else{
		printf("Thank you");
		break;
	}
}
}
