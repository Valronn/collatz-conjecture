#include <iostream>
#include <ctime>

bool is_even(int);
bool is_valid(int);
void calculate(int);

bool is_valid(int number){
    if(number<=0){
        return false;
    }else{
        return true;
    }
}

bool is_even(int number){
    if(number % 2 == 0){
        return true;
    }else{
        return false;
    }
}

void calculate(int number){
    if(number == 1){
        std::cout << "Finished" << std::endl;
        return;
    }else if(is_even(number)){
        number = number / 2;
        std::cout <<number << std::endl;
        calculate(number);
    }else{
        number = number * 3 + 1;
        std::cout <<number << std::endl;
        calculate(number);
    }
}

int main(){
    int input_data;
    std::cout << "Enter the number " << std::endl;
    std::cin >> input_data;
    if(is_valid(input_data)){
        calculate(input_data);
    } else{
        std::cout<<"You must enter integer greater than 0!"<< std::endl;
    }
}

