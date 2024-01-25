#include "PmergeMe.hpp"

bool sortbysec(const std::pair<double, double> &a, const std::pair<double, double> &b) {
    return (a.second < b.second);
}

double  strToDouble(std::string str) {
	std::stringstream	valueSs(str);
	double				valuedouble;

	valueSs >> valuedouble;
	return (valuedouble);
}

bool    checkInput(char **inputTab){
    int i = 1;

    while (inputTab[i])
    {
        std::string str(inputTab[i]);
        if (str.find_first_not_of("0123456789") != std::string::npos) 
        {
            std::cout << "Error: Input must be a positive integer sequence" << std::endl;
            return (false);
        }
        i++;
    }
    return (true);
}
