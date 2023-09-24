#ifndef INPUT_HANDLING_H
#define INPUT_HANDLING_H

class InputHandling {
public:
    // default constructor
    InputHandling();
    // overloaded constructor
    InputHandling() :
        parameter_1,
        parameter_2;
private:
    void recording();
    bool start_recording() const;
    bool end_recording() const;
    // function to recieve input for src
    // function to send input to destination file
};

#endif
