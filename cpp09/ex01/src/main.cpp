#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc == 2)
    {
        std::string str(argv[1]);

        try 
        {
            rpn(str);
        }
        catch (std::exception const& e)
        {
            std::cerr << e.what() << std::endl;
            return (1);
        }
    }
    else
        std::cout << "RPN needs 1 argument" << std::endl;
    return (0);
}
