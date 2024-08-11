#include<iostream>
#include<time.h>

int main() {

    int num;
    int guess;
    int tries;

    srand(time(0));
    num = (rand()%100)+1; //FOR TAKING ANY RANDOM NUMBER 


    std::cout<<"*****Welcome to number guessing game******"<<'\n';

    while(guess!=num) {
    
    std::cout<<"ENTER THE NUMBER BETWEEN (1-100):  ";
    std::cin>>guess;

    if(guess>num) {std::cout<<"TOO HIGH: "<<'\n';}
    else if(guess<num) {std::cout<<"TOO LOW"<<'\n';}
    else {std::cout<<"**CORRECT**"<<'\n';
    break;

    }
    }
}
    

    





    