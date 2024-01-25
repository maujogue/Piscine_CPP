#include "RPN.hpp"

double  strToDouble(std::string str){
	std::stringstream	valueSs(str);
	double				valueDouble;

	valueSs >> valueDouble;
	return (valueDouble);
}

void PrintStack(std::stack<double> s)
{
    if (s.empty()) 
        return;
    double x = s.top();
    s.pop();
    PrintStack(s);
    std::cout << x << " ";
    s.push(x);
}

double	operation(std::stack<double>	&inputArray, char operand)
{
	if (inputArray.size() < 2)
		throw std::invalid_argument("Error: Invalid operation");
	double	n2 = inputArray.top();
	inputArray.pop();
	double	n1 = inputArray.top();
	inputArray.pop();
	double result;

	switch (operand) {
		case '+':
			return (n1 + n2);
		case '-':
			return (n1 - n2);
		case '*':
			return (n1 * n2);
		case '/':
			if (n2 == 0)
				throw std::domain_error("Error: Division by zero");
			result = n1 / n2;
			break;
	}
	return (result);
}

void  rpn(std::string input){
    std::stack<double>     inputArray;
    std::string                 element;
    std::stringstream           ss(input);

    while (std::getline(ss, element, ' '))
    {
		if (element != "") {
			if (element.size() > 1 || input.find_first_not_of("0123456789+-/* ") != std::string::npos)
				throw std::invalid_argument("Error: Input must be composed of [numbers of 1-digit] or [+ - / *] operands");
			if (element.find_first_not_of("+-*/") != std::string::npos)
				inputArray.push(strToDouble(element));
			else
			{
				// std::cout << element[0] << " ";
				// std::cout << "[";
				// PrintStack(inputArray);
				// std::cout << "] " << std::endl;
				inputArray.push(operation(inputArray, element[0]));
			}
		}
    }
	if (inputArray.size() > 1)
		throw std::invalid_argument("Error: Invalid operation");
	else
		std::cout << inputArray.top() << std::endl;
}