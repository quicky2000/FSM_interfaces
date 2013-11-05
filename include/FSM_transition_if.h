
#ifndef _FSM_TRANSITION_IF_
#define _FSM_TRANSITION_IF_

#include <string>

namespace FSM_interfaces
{
  class FSM_transition_if
  {
  public:
    // Methods to implement
    virtual const std::string to_string(void)const=0;
    virtual void to_string(std::string &)const=0;
  
    // Virtual destructor
    inline virtual ~FSM_transition_if(void){}
  };
}
#endif
//EOF
