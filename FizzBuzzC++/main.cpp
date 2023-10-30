#include <iostream>

// Fizz Buzz - when a number is a multiple of 3 print fizz if 5 print buzz when both
// print FizzBuzz
void fizzBuzz(){

}

int main(){

    for(int num; num <= 100; num++){
        
        if(num % 3 == 0 && num % 5 == 0){
            std::cout << "FizzBuzz\n";
        }
        else if(num % 3 == 0){
            std::cout << "Fizz\n";
        }
        else if(num % 5 == 0){
            std::cout << "Buzz\n";
        }
        else{
            std::cout << num << '\n';
        }
    }

    fizzBuzz();

    return 0;
}