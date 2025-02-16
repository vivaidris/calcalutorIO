// A basic math calculator by me!

#include <iostream>
#include <cmath>

int main()
{
    double num1;
    double num2;
    double num3;
    char op;
    std::string ops;
    double result;

    std::cout << "*********** CALCULATOR *************" << '\n';

    std::cout << "Select an operator (+, -, *, /, sqrt or pow): ";
    std::cin >> op;

    if(op == '$')
    {
        std::cout << "Which advanced operand do you want to use: ";
        std::cin >> ops;
    }

    if(op == '+')
    {
        std::cout << "Insert num1: ";
        std::cin >> num1;

        std::cout << "Insert num2: ";
        std::cin >> num2;

        std::cout << "Insert num3: ";
        std::cin >> num3;

        if(num3 == 0)
        {
            result = num1 + num2;
            std::cout << result << '\n';
        }
        else if(num2 == 0)
        {
            result = num1+num3;
            std::cout << result << '\n';
        }
        else if(num1 == 0)
        {
            result = num2 + num3;
            std::cout << result << '\n';
        }
        else
        {
            result = num1+num2+num3;
            std::cout << result << '\n';
        }
    }
    else if(op == '-')
    {
        std::cout << "Insert num1: ";
        std::cin >> num1;

        std::cout << "Insert num2: ";
        std::cin >> num2;

        std::cout << "Insert num3: ";
        std::cin >> num3;

        if(num3 == 0)
        {
            result = num1 - num2;
            std::cout << result << '\n';
        }
        else if(num2 == 0)
        {
            result = num1-num3;
            std::cout << result << '\n';
        }
        else if(num1 == 0)
        {
            result = num2 - num3;
            std::cout << result << '\n';
        }
        else
        {
            result = num1-num2-num3;
            std::cout << result << '\n';
        } 
    }
    else if(op == '*')
    {
        std::cout << "Insert num1: ";
        std::cin >> num1;

        std::cout << "Insert num2: ";
        std::cin >> num2;

        std::cout << "Insert num3: ";
        std::cin >> num3;

        if(num3 == 0)
        {
            result = 0;
            std::cout << result << '\n';
        }
        else if(num2 == 0)
        {
            result = 0;
            std::cout << result << '\n';
        }
        else if(num1 == 0)
        {
            result = 0;
            std::cout << result << '\n';
        }
        else
        {
            result = num1*num2*num3;
            std::cout << result << '\n';
        }
    }
    else if(op == '/')
    {
        std::cout << "Insert num1: ";
        std::cin >> num1;

        std::cout << "Insert num2: ";
        std::cin >> num2;
        
        if(num2 == 0)
        {
            result = 0;
            std::cout << result << '\n';
        }
        else if(num1 == 0)
        {
            result = 0;
            std::cout << result << '\n';
        }
        else
        {
            result = num1/num2;
            std::cout << result << '\n';
        }
    }
    
    if(ops == "sqrt")
    {
        std::cout << "Insert number: ";
        std::cin >> num1;

        if(num1 == 0)
        {
            result = 0;
            std::cout << result << '\n';
        }
        else
        {
            result = sqrt(num1);
            std::cout << result << '\n';
        }
    }
    else if(ops == "pow")
    {
        std::cout << "Insert base number: ";
        std::cin >> num1;

        std::cout << "Insert exponent";
        std::cin >> num2;

        if(num2 == 0)
        {
        result = 1;
        std::cout << result << '\n';
        }
        else if(num1 == 0 && num2 == 0)
        {
            std::cout << "Undefined" << '\n';
        }
        else if(num1 == 0)
        {
            result = 0;
            std::cout << result << '\n';
        }
        else
        {
            result = pow(num1, num2);
            std::cout << result << '\n';
        }
    }
    std::cout << "************************************";

    return 0;
    
}
