# include <iostream>
# include "kernel.hpp"
# include "Neurons.hpp"

int main(int args, char ** argv) 
{
    Neuron n;
    std::cout << "factor: " << n.random() << std::endl;
    return 0;
}

class CNN : Neuron {
    int i = random();
};