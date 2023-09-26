#ifndef STATE_H
#define STATE_H

class State {
public:
    State();

    void set_status(bool status);
    void get_status() const;
private:
    bool m_status = false;
};

#endif
