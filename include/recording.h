#ifndef RECORDING_H
#define RECORDING_H

class Recording {
public:
    Recording(const std::string& filename, State& status);
private:
    bool start_recording() const;
    bool end_recording() const;
    // function to recieve input for src
    // function to send input to destination file

    std::string filename;
    bool m_is_recording = false;
};

#endif
