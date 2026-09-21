/*
Write a C program that simulates an ATM withdrawal.

Start with predefined values for:

Account balance
Withdrawal amount
PIN
Correct PIN
Age

Use bool, comparison operators, and logical operators to check whether:

The PIN is correct
The user is 18 or older
The withdrawal is greater than 0
The withdrawal is within the balance
The withdrawal is a multiple of 10

If the withdrawal is valid, subtract it from the balance.

Charge a €2 fee for normal withdrawals, or a €5 fee if the withdrawal is over €500.

Calculate the remainder of the withdrawal divided by 100.

Keep track of the number of transactions using ++ or --.

Print the results at the end.

Requirements:

Arithmetic operators
%
++ or --
At least 2 compound assignment operators
Comparison operators
&&, ||, !
At least 2 bool variables
if
if / else
if / else if / else



*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    double accountBalance = 13450;
    double withdrawaAmount = 2330;
    double pin = 5462;
    double correctPin = 5588;
    double age = 27;
    double transactionsCount = 0;

    if(pin == correctPin && age > 18 && withdrawaAmount > 0 && (int) withdrawaAmount%10 == 0){
        accountBalance -= withdrawaAmount;
        transactionsCount ++;
        if(withdrawaAmount > 500){
            accountBalance -= 5;
        }else{
            accountBalance -= 2;
        }
        
    }

    int remainder = (int)withdrawaAmount%100;


    printf("accountBalance:%lf\n, withdrawaAmount:%lf\n, pin:%lf\n, correctPin:%lf\n, age:%lf\n transactionsCount:%lf\n",
        accountBalance,withdrawaAmount,pin,correctPin, age, transactionsCount);

}