#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <cstdlib>
# include <ctime>
# include <sstream>
# include <bits/stdc++.h> 

# ifndef PRINT_ARRAY
#  define PRINT_ARRAY 0
# endif

double      strToDouble(std::string str);
bool        checkInput(char **inputTab);
void        PmergeMe(char **inputTab, int argc);
bool 		sortbysec(const std::pair<double, double> &a, const std::pair<double, double> &b);

template < typename T>
void printArray(T &array) {
	for (typename T::iterator it = array.begin(); it != array.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename C, typename Pairs>
class   Container{

    private:
        C			_chain;
        C			_pend;
		Pairs 		_pairs;
		C			_insertionOrder;
        int			_size;
		int			_struggler;
	
	public:
		typedef typename C::iterator 		iterator;
		typedef typename Pairs::iterator 	iteratorPairs;

		Container() : _size(0), _struggler(-1){}

		~Container() {}

		Container(char** array, std::size_t size) : _size(size - 1){
			for (std::size_t i = 1; i < size; ++i) {
				_chain.push_back(strToDouble(array[i]));
			}
		}

		Container(Container& src) : _size(src._size), _struggler(src._struggler) {
			this->_chain = src._chain;
			this->_pend = src._pend;
			this->_insertionOrder = src._insertionOrder;
			this->_pairs = src._pairs;
		}

		const Container&	operator=(const Container& src) {
			this->_size = src._size;
			this->_struggler = src._struggler;
			this->_chain = src._chain;
			this->_pend = src._pend;
			this->_insertionOrder = src._insertionOrder;
			this->_pairs = src._pairs;
		}

		C	&get_chain() { return (_chain);};
		C	&get_pend() { return (_pend);};
		int get_size() {return (_struggler == -1 ? _size : _size + 1);};

		void	launchMergeSort() {
			setStruggler();
			sortInsidePairs();
			containerToPairs();
			sortPairs();
			pairsToContainer();
			generateInsertionOrder();
			insertPendIntoChain();
			insertStruggler();
		}

		void print() {
			int i = 0;
			for (typename C::const_iterator it = _chain.begin(); it != _chain.end(); ++it) {
				if (i >= 5 && !PRINT_ARRAY) {
					std::cout << "[...]" << std::endl;	
					return ;
				}
				std::cout << *it << " ";
				i++;
			}
			std::cout << std::endl;
		}

		void printPairs() {
			for (iteratorPairs it = _pairs.begin(); it != _pairs.end(); ++it) {
				std::cout << (*it).first << " ";
				std::cout << (*it).second << " ";
			}
			std::cout << std::endl;
		}

		void	setStruggler() {
			if (_size % 2 == 1){
				_struggler = *(_chain.end() - 1);
				_chain.erase(_chain.end() - 1);
				_size--;
			}
			else
				_struggler = -1;
		}

		void	sortInsidePairs() {
			iterator it = _chain.begin();
			iterator ite = _chain.end();

			for (; it != ite; it+=2) {
				if (*it > *(it + 1))
					std::iter_swap(it, it + 1);
			}
		}

		void	containerToPairs() {
			for (iterator it = _chain.begin(); it != _chain.end(); it+=2) {
				_pairs.push_back(std::make_pair(*it, *(it + 1)));
			}
		}

		void	sortPairs() {
			sort(_pairs.begin(), _pairs.end(), sortbysec);
		}

		void	pairsToContainer() {
			iteratorPairs it = _pairs.begin();
			iteratorPairs ite = _pairs.end();

			_chain.clear();
			for (; it != ite; it++) {
				_pend.push_back((*it).first);
				_chain.push_back((*it).second);
			}
		}

		void	generateInsertionOrder() {
			int	i = 2;
			int halfSize = _size / 2;
			C	jacobNumbers;
			jacobNumbers.push_back(1);
			jacobNumbers.push_back(1);
			while (*(jacobNumbers.end() - 1) < halfSize)
			{
				jacobNumbers.push_back(jacobNumbers[i - 1] + 2 * jacobNumbers[i - 2]);
				i++;
			}

			i = 2;
			_insertionOrder.push_back(1);
			if (halfSize == 2)
			{
				_insertionOrder.push_back(2);
				return ;
			}
			if (halfSize < 2)
				return ;
			else
				_insertionOrder.push_back(1);
			while (std::find(_insertionOrder.begin(), _insertionOrder.end(), halfSize ) == _insertionOrder.end())
			{
				int nextJacobnumber = jacobNumbers[i - 1] + 2 * jacobNumbers[i - 2];
				if (nextJacobnumber > halfSize)
					nextJacobnumber = halfSize;
				int precedingJacobnumber = jacobNumbers[i - 1];
				int j = nextJacobnumber;
				while (j > precedingJacobnumber) {
					_insertionOrder.push_back(j);
					j--;
				}
				i++;
			}
			_insertionOrder.erase(_insertionOrder.begin());
		}

		void	insertPendIntoChain() {

			iterator itInsert= _insertionOrder.begin();

			while (_chain.size() < static_cast<size_t>(_size))
			{
				iterator itChain = _chain.begin();
				while (itChain != _chain.end() && *itChain < _pend[*itInsert - 1]) {
					itChain++;
				}
				_chain.insert(itChain, _pend[*itInsert - 1]);
				itChain++;
				itInsert++;
			}
		}

		void	insertStruggler() {
			if (_struggler == -1)
				return;
			iterator itChain = _chain.begin();
			while (itChain != _chain.end() && *itChain < _struggler) {
					itChain++;
			}
			_chain.insert(itChain, _struggler);
		}
};

#endif