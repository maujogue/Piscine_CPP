#include "easyfind.hpp"
#include <list>
#include <deque>
#include <vector>

int main (void){
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(-4);
	numbers.push_back(102);
	numbers.push_back(17);

	std::deque<int> deq;
	deq.push_back(1);
	deq.push_back(2);
	deq.push_back(-4);
	deq.push_back(102);
	deq.push_back(17);

	std::list<int> pile;
	pile.push_front(1);
	pile.push_front(2);
	std::cout << "Vector : " << easyfind(numbers, 2);
	std::cout << " " << easyfind(numbers, 3) << std::endl;
	std::cout << "List : " << easyfind(pile, 2);
	std::cout << " " <<  easyfind(pile, 3) << std::endl;
	std::cout << "Deque : " <<easyfind(deq, 2);
	std::cout << " " <<  easyfind(deq, 3) << std::endl;
}