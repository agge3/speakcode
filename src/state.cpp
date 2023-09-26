#include "state.h"

State::State() :
    m_status(false)
{
    // empty line
}

void State::set_status(bool status)
{
    m_status = true;
}

void State::get_status() const
{
    return m_status;
}
