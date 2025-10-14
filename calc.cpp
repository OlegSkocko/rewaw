#include <iostream>

int  main(){
    double num1,num2;
    char op;
   std::cout << "Введіть перше число: ";
    std::cin >> num1;

    std::cout << "Введіть оператор (*, -, +, /): ";
    std::cin >> op;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

    double result;

    switch(op){
        case '+':
        result=num1+num2;
        break;
        case '-':
        result=num1-num2;
        break;
        case '*':
        result=num1*num2;
        break;
        case '/':
    if (num2 !=0)
    result=num1/num2;
    
    else {
        std::cout<<std::endl;
        return 1;
    }
    break;
    default:
    std::cout<<std::endl;
    return 1;
    }
    std::cout << "Результат: " << result << std::endl;
return 0;
}