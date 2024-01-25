#include "MutantStack.hpp"

int main()
{	
	std::cout << "------  MUTANT STACK  -------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);

		std::cout << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
		MutantStack<int>::riterator rit = mstack.rbegin();
		MutantStack<int>::riterator rite = mstack.rend();

		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}

		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << "------  LIST  -------" << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);

		mstack.push_back(0);

		std::cout << std::endl;
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
		std::list<int>::reverse_iterator rit = mstack.rbegin();
		std::list<int>::reverse_iterator rite = mstack.rend();

		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
		return 0;
	}
};