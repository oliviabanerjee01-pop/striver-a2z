#include <iostream>
int main(){
    for(int c = 0; c<4; c++){
        for(int r = 0; r<4; r++){
            if(r == 0 || r ==3 || c==0 || c==3)
                std::cout<<"*";
            else
                std::cout<< " ";
        }
        std::cout<<"\n";
    }




    return 0;
}