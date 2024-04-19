#include <iostream>

double inputNumber()
{
	double x;
	std::cout << "Please input an float: ";
	std::cin >> x;
	return x;
}

char inputOperator()
{
	std::cout << "\nPlease input operator for desired operation:";
	std::cout << "\nChoose from : +-*/\n";
	char a;
	std::cin >> a;
	return a;
}

double calculation(double x, double y, char oper)
{
	
	if (oper == '*')
		return x * y;
	else if (oper == '+')
		return x + y;
	else if (oper == '-')
		return x - y;
	else if (oper == '/')
		return x / y;
	else return 0;

}

int main()
{

	double a{ inputNumber() };
	double b{ inputNumber() };
	char oper { inputOperator() };
	std::cout << a << oper << b << "=";
	std::cout << calculation(a, b, oper);

	return 0;

}