#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src): _priceMap(src._priceMap), _inputMap(src._inputMap) {}

const BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src){
	if (this != &src)
	{
		this->_inputMap = src._inputMap;
		this->_priceMap = src._priceMap;
	}
	return (*this);
}

float	strToFloat(std::string str){
	std::stringstream	valueSs(str);
	float				valueFloat;

	valueSs >> valueFloat;
	return (valueFloat);
}

std::map<int, int>	endOfMonthNumber( void ){
	std::map<int, int> array;

	for (int i = 1; i < 8; i++)
		array[i] = 30 + i % 2;
	for (int i = 8; i < 13; i++)
		array[i] = 30 + (i + 1) % 2;
	array[2] = 28;
	return (array);
}

bool	BitcoinExchange::checkLine(std::string line, std::string key, std::string valueStr, char separator)
{
	std::string yearStr = key.substr(0, key.find("-"));
	std::string monthStr = key.substr(key.find("-") + 1, key.find_last_of("-") - key.find("-") - 1);
	std::string dayStr = key.substr(key.find_last_of("-") + 1, key.length() - key.find(' ') + 1);
	_year = strToFloat(yearStr);
	_month = strToFloat(monthStr);
	_day = strToFloat(dayStr);
	_value = strToFloat(valueStr);

	std::map<int, int> eofMonth = endOfMonthNumber();
	if (yearStr.length() != 4 || monthStr.length() != 2 || dayStr.length() != 2
		|| key.find("-" , key.find("-") + 1) != key.find_last_of("-")){
		std::cout << "Error: date format required: Year-Month-Day." << std::endl;
		return (false);
	}
	if (  _year < 2000 || _year > 2030) {
		std::cout << "Error: Year must be between 2000 and 2030" << std::endl;
		return (false);
	}
	if ( _month > 12 || _month < 1 || _day > eofMonth[_month] || _day < 1){
		std::cout << "Error: Date must be valid" << std::endl;
		return (false);
	}
	if ((_value <= 0 || _value >= 1000) && separator == '|'){
		std::cout << "Error: value required: float or integer, between 0 and 1000." << std::endl;
		return (false);
	}
	if (_value < 0 && separator == ','){
		std::cout << "Error: value required: positive or null float or integer." << std::endl;
		return (false);
	}
	if (line.find(separator) == std::string::npos || valueStr.substr(1).find_first_not_of("0123456789-.") != std::string::npos) {
		std::cout << "Error: line format required: \"date | value\"" << std::endl;
		return (false);
	}
	return (true);
}

std::string BitcoinExchange::getClosestKey(){
	std::string	closestKey;
	std::map<std::string, float>::iterator it = this->_priceMap.begin();
	std::map<std::string, float>::iterator ite = this->_priceMap.end();
	float tYear = strToFloat(it->first.substr(0, 4));
	float tMonth = strToFloat(it->first.substr(5, 7));
	float tDay = strToFloat(it->first.substr(8, 10));

	while (it != ite){
		tYear = strToFloat(it->first.substr(0, 4));
		tMonth = strToFloat(it->first.substr(5, 7));
		tDay = strToFloat(it->first.substr(8, 10));
		if ((tYear < _year || tMonth < _month || tDay < _day) || (tYear == _year && tMonth == _month && tDay == _day)) {
			closestKey = it->first;
			it++;
		}
		else
			break;
	}
	return (closestKey);
}

int	BitcoinExchange::parseInputFile(std::string inputFileName, std::string fileFormatIdentifier, char separator) {
	std::ifstream					data(inputFileName.c_str());
	std::string						line;

	if (!data.is_open())
	{
		std::cout << "Error: Can't open " << inputFileName << std::endl;
		return (1);
	}
	while (std::getline (data, line)) {
		if (line.find(fileFormatIdentifier) == std::string::npos)
		{
			std::stringstream	ssLine(line);
			std::string			key;
			std::string			valueStr;
			float				valueFloat;
			
			std::getline(ssLine, key, separator);
			std::getline(ssLine, valueStr, separator);
			valueFloat = strToFloat(valueStr);
			if (bool check = checkLine(line, key, valueStr, separator))
			{
				if (separator == ',')
					this->_priceMap[key] = valueFloat;
				else
					std::cout << key << " => " << valueFloat << " = " << this->_priceMap[getClosestKey()] * valueFloat << std::endl;
			}
			else if (check == false && separator == ',') {
				std::cout << "Fatal Error: Please make sur your data.csv file is valid before continuing" << std::endl;
				return (1);
			}
		}
	}
	data.close();
	return(0);
}
