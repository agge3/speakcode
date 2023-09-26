#include "recording.h"

//bool InputHandling::is_recording const
//{
//    return false;
//}

Recording::Recording(const std::string& filename, State& status) :
    m_filename(filename),
    m_is_recording(status.get_status())
{
    // flag to process recording
    bool waiting_to_process = false;
    // while true (key is pressed)
    while (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        status.set_status(true);
        // recieve voice input
        // set waiting_to_process to true
        waiting_to_process = true;
    }
    // check if recording is valid and exists
    ifstream filename;
    if (filename.open("tmp_voice.mp3") && waiting_to_process) {
        // inform client of action
        // TODO: use speech glob to inform client of action
        cout << "Please wait. Processing.../n";
        // call class/func to send to WhisperAI
        while (waiting_to_process) {
            // if processed, break loop
            if (processed) {
                waiting_to_process = false;
            } else {
            // error handling
            }
        }
    }
}
