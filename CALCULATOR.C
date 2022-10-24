#include<stdio.h>
#include<string.h>

// 2022 Calculator (type B)
/*
   Calculator (type B) version 1.0.0, source code built by Wasim Akram.
*/

int Addition(){
    
    int num1;
    int num2;
    int cal = num1 + num2;
    
    printf("You are now in Addition!\n");
    
    scanf("%d", num1);
    printf("%d + ", num1);
    scanf("%d", num2);
    
    printf("%d + ", num1);
    printf("%d = ", num2);
    printf("%d", cal);
    
}

int Multiplication(){
    
    int num1;
    int num2;
    int cal = num1 * num2;
    
    printf("You are now in Multiplication!\n");
    
    scanf("%d", num1);
    printf("%d × ", num1);
    scanf("%d", num2);
    
    printf("%d × ", num1);
    printf("%d = ", num2);
    printf("%d", cal);
    
    return cal;
}

int Subraction(){
    
    int num1;
    int num2;
    int cal = num1 - num2;
    
    printf("You are now in Subraction!\n");
    
    scanf("%d", num1);
    printf("%d - ", num1);
    scanf("%d", num2);
    
    printf("%d - ", num1);
    printf("%d = ", num2);
    printf("%d", cal);
    
    return cal;
}

int Division(){
    
    int num1;
    int num2;
    int cal = num1 / num2;
    
    printf("You are now in Division!\n");
    
    scanf("%d", num1);
    printf("%d ÷ ", num1);
    scanf("%d", num2);
    
    printf("%d ÷ ", num1);
    printf("%d = ", num2);
    printf("%d", cal);
    
    return cal;
}

enum Operator{addition = 1, multiplication = 2, subraction = 3, division = 4};

int main(){
    
    enum Operator current;
    
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Subraction\n");
    printf("4. Division\n");
    printf("\nEnter your operator by decimals: ");
    scanf("%d", current);
    
    if(current == 1){
        
        Addition();
        
    }
    else if(current == 2){
        
        Multiplication();
        
    }
    else if(current == 3){
        
        Subraction();
        
    }
    else if(current == 4){
        
        Division();
        
    }
    else{
        
        printf("error: Unvalid Operator");
        
    }
    
    return 0;
}