#include <iostream>

int main(){
    //if statements = do something if a condition is true.
    //                 if not, then dont do it

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

     if(age >= 100){std::cout << "you are too old to enter this site!";}
        else if(age >= 18){
        std::cout << "welcome to site!"; 
    
    }


    else if(age <0){

    std::cout << "you havent been born yet!";
}

else{
    std::cout << "you are not old enough to enter!";
}

    return 0;
} 