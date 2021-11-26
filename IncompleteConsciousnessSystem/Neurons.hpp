# include <iostream>
# include <unordered_map>
# include <Windows.h>
# include <string>

// This type is the smallest unit structure "neuron" in the nervous system
class Neuron {
    public:
        Neuron(/* args */);
        ~Neuron();

        unsigned int gen_uid();

        // Generate a two-digit random number with the current time in milliseconds
        int random();

        // Neuron unique identifier
        unsigned int uid;

        // Neuron name
        std::string * name;

        // Neuron state
        enum NeuronState {
            Discharge = 1, Resting = 0
        };

        std::unordered_map<unsigned int, std::string> Msg;
        std::unordered_map<unsigned int, double> threshold;
        // Synapse
        std::unordered_map<int, NeuronState> S;
        // Dendrite
        std::unordered_map<int, NeuronState> D;

};

Neuron::Neuron() {

}
Neuron::~Neuron() {

}


int Neuron::random()
{
    SYSTEMTIME sys; GetLocalTime(&sys);

    int factor = sys.wMilliseconds;

    const char * _tmp = std::to_string(factor).c_str();

    if (strlen(_tmp) == 1) {
        return factor;
    } else if (strlen(_tmp) >= 2) {
        std::string _tmp_after_str;
        _tmp_after_str[0] = _tmp[0];
        _tmp_after_str[1] = _tmp[1];
        return atoi(_tmp_after_str.c_str());
    }

    // exception value
    return 0;
}
