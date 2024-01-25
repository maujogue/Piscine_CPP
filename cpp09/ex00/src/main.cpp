#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error: invalid number of argument" << std::endl;
		return (0);
	}

	BitcoinExchange btc;

	if (btc.parseInputFile("data.csv", "date,exchange_rate", ',') == 0)
		btc.parseInputFile(argv[1], "date | value", '|');
		
	return (0);
}