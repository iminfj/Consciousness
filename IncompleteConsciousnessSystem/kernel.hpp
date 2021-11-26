# include <iostream>
# include <unordered_map>

class kernel
{
    private:
        /* data */
    public:
        kernel(/* args */);
        ~kernel();

        //
        static unsigned int neurons_count;
};

kernel::kernel(/* args */)
{
    std::cout << ">> kernel be call ... log" << std::endl;
}

kernel::~kernel()
{
    std::cout << ">> kernel of the call is done" << std::endl;
}
