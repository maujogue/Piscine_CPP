#include <iostream>
#include <Array.hpp>

#include <cstdlib>

int main()
{
    // EMPTY AND DEFAULT VALUE OF ARRAY
	Array<float> emptyTab;
	std::cout << "Size of empty tab is : " << emptyTab.size() << std::endl;
	Array<double> defaultTab(2);
	std::cout << "Default value of tab element is : " << defaultTab[0] << std::endl;

    // TRY-CATCH ON OUT OF SCOPE QUERIES
    try
    {
        defaultTab[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        defaultTab[3] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // ASSIGNING A LARGER TAB TO A SMALLER TAB
    Array<int> first(5);
    Array<int> second(10);
    first.print();
    std::cout << "\nfirst Array assigned to second Array\n" << std::endl;
    first = second ;
    first.print();

    // VERIFYING DEEP COPY OF ARRAY
    Array<int> copyConstructorOnFirstArray(first);
    Array<int> assignementOnFirstArray(first);

    first[1] = 42;

    std::cout << std::endl;
    first.print();
    std::cout << std::endl;
    copyConstructorOnFirstArray.print();
    std::cout << std::endl;
    assignementOnFirstArray.print();
}