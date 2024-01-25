#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:

        MutantStack() {}
        MutantStack( MutantStack const & cpy ): std::stack<T, Container>(cpy) {}
        virtual ~MutantStack() {}

        MutantStack<T> & operator=( const MutantStack& other) {
			if (this != &other)
				this->c = other.c;
			return *this;
		}

        typedef typename Container::iterator				iterator;
        typedef typename Container::reverse_iterator		riterator;

        iterator begin() {
			return this->c.begin();
		}
		
        iterator end() {
			return this->c.end();
		}

		riterator rbegin() {
			return this->c.rbegin();
		}
		
        riterator rend() {
			return this->c.rend();
		}
};

#endif