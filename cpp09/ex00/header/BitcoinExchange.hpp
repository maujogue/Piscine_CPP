#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <fstream>
# include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float> 	_priceMap;
		std::map<std::string, float> 	_inputMap;
		float							_year;
		float							_month;
		float							_day;
		float							_value;

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& src);
	
		const	BitcoinExchange& operator=(const BitcoinExchange& src);

		bool		checkLine(std::string line, std::string key, std::string valueStr, char separator);
		int			parseInputFile(std::string inputFileName, std::string fileFormatIdentifier, char separator);
		std::string getClosestKey();

};

#endif