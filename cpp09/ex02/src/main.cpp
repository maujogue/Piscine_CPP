#include "PmergeMe.hpp"

void PmergeMe(char **argv, int argc) {
    Container<std::vector <double>, std::vector< std::pair <double, double> > > containerVector(argv, argc);
    Container<std::deque <double>, std::deque< std::pair <double, double> > > containerDeque(argv, argc);


	std::cout << "Before:	";
    containerVector.print();

	clock_t start, end;
	start = clock();
	containerVector.launchMergeSort();
	end = clock();

    std::cout << "After:	";
    containerVector.print();
	
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	std::cout << "Time to process a range of " << containerVector.get_size() \
		<< " elements with std::vector	:	" << time_taken << " us" << std::endl;


	start = clock();
	containerDeque.launchMergeSort();
	end = clock();

	time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	std::cout << "Time to process a range of " << containerVector.get_size() \
	<< " elements with std::deque	:	" << time_taken << " us" << std::endl;
}

int main (int argc, char **argv) {
    if (argc < 2)
        std::cout << "Error: Program needs 1 argument" << std::endl;
    else
    {
        std::string str(argv[1]);
        if (checkInput(argv))
           PmergeMe(argv, argc);
    }
    return (0);
}