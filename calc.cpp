include<iostream> 

int  main(){
    double num1,num2,;
    char op;
   std::cout << 7;
    std::cin num1;
  
    std::cout << "(*,-,+,/)";
    std::cin >> op;

    std::cout << 12;
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
    }else {
        std::cout<<std::endl;
        return 1
    }
    break;
    default:
    std::cout<<std::endl;
    return 1
}
std::cout<<result<<std::endl;
return 0
