/*
 Author - Mohamad Jeradi
 Calculator in functions
 calculator.cpp
 */

#include <iostream>

int number1, number2;
char results;



void beginner(){
    std::cout << ("Enter number 1 - ");
    std::cin >> number1;
    std::cout << ("Enter number 2 - ");
    std::cin >> number2;
    std::cout << ("Enter your operation - +, -, *, /: ");
    std::cin >> results;
}


void statements(){
    
    switch (results) {
        case '+':
            std::cout << "The result is "<< number1 + number2;
            break;
            
        case '-':
            std::cout << "The result is " << number1 - number2;
            break;
        case '*':
            std::cout << "The result is " << number1 * number2;
            
            break;
        case '/':
            if (number2 != 0){
                std::cout << "The result is " << number1 / number2;

            }
            else {
                std::cout << ("error, dont divide by zero");
            }
            break;
        default:
            std::cout << ("Try again, wrong operator.");
            break;
    }
}



int main(){
    
    beginner();
    statements();
    
    return 0;
    
    
    
}
