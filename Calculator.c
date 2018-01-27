#include <stdio.h>
#include "operations.h"

int main(){
	/*
		Author: Corey Pierce
		Program: Calculator
		Date: January 26, 2018
	*/
	int firstNum; //initialize firstNum var
	int secondNum;	//initialize secondNum var
	char choice;	//initialize choice var
	int sum;	//this will hold the value of the sum 
	int dif;	//this will hold the value of the difference 
	int pro;	//this will hold the value of the product 
	int quo;	//this will hold the value of the quotient 
	int fac;	//this will hold the value of the factorial 
	printf("Welcome to my Calculator Program!\n");
	printf("*********************************\n\n");
	
	printf("Enter the First Number: ");
	scanf("%d", &firstNum);
	
	printf("Enter an operation:\n");
	printf("[A]ddition\n");
	printf("[S]ubtraction\n");
	printf("[M]ultiplication\n");
	printf("[D]ivision\n");
	printf("[F]actorial\n");
	
	printf("Choice: ");
	scanf(" %c",&choice);
	//switch case block here for the choices
	switch(choice){
		case 'A':
			printf("\nEnter the second number: ");
			scanf("%d", &secondNum);
			sum = add(firstNum, secondNum);
			printf("%d + %d = %d\n", firstNum, secondNum, sum);
			break;
		case 'S':
			printf("\nEnter the second number: ");
			scanf("%d", &secondNum);
			dif = sub(firstNum, secondNum);
			printf("%d - %d = %d\n", firstNum, secondNum, dif);
			break;
		case 'M':
			printf("\nEnter the second number: ");
			scanf("%d", &secondNum);
			pro = mul(firstNum, secondNum);
			printf("%d * %d = %d\n", firstNum, secondNum, mul);
			break;
		case 'D':
			printf("\nEnter the second number: ");
			scanf("%d", &secondNum);
			quo = div(firstNum, secondNum);
			if(quo == 0){
				printf("\nError: Cannot Divide By 0");
			}else{
				printf("%d / %d = %d\n", firstNum, secondNum, quo);
			}
			break;
		case 'F':
			fac = factorial(firstNum);
			printf("%d! = %d\n", firstNum, fac);
			break;
		default:
			printf("Invalid Operation!\n");
	}
	
	return 0;
}

int add(int firstNum, int secondNum){
	return firstNum + secondNum;
}
int sub(int firstNum, int secondNum){
	return firstNum - secondNum;
}
int mul(int firstNum, int secondNum){
	return firstNum * secondNum;
}
int div(int firstNum, int secondNum){
	//this is a error check in case user enters x/0 this will catch it
	if(secondNum == 0){
		return 0;
	}else{
		return firstNum/secondNum;
	}
}
int factorial(int firstNum){
	if(firstNum == 0){
		return 1;
	}else{
		return firstNum * factorial(firstNum - 1);
	}
}