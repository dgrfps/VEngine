#include "./app/engine.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main()
{
    Engine::VEngine vEng;
    
    try
    {
        vEng.run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}