#include "template.hpp"

class test {
	private:
		int _n;
	public:
		test(int n): _n(n){};
		int get_n( void ) const { return (_n);};
};

int main( void ) 
{

	test A(69);
	test B(42);
	swap(A, B);
	std::cout << "A = " << A.get_n() << std::endl;
	std::cout << "B = " << B.get_n() << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}