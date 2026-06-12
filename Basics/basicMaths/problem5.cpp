#include <iostream>
#include <cmath>
int main(){
    int n;
    int count = 0;
    std::cout<<"Enter your number: ";
    
    std::cin>>n;
    int original = n;
    

    while (n>0){
        n = n/10;
        count++;
    }
    n = original;

    int sum = 0;
    while (n>0){
        int digit = n%10;
        sum = sum + pow(digit,count);
        n = n/10;
    }
    if(sum == original){
        std::cout << "Armstrong number";
    }
    else{
        std::cout << "Not Armstrong";
    }
return 0;
}

