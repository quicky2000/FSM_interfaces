
#ifndef _FSM_TRANSITION_IF_
#define _FSM_TRANSITION_IF_

#include <string>

class FSM_transition_if
{
 public:
  // Methods to implement
  virtual std::string toString(void)const=0;
  
  // Virtual destructor
  virtual ~FSM_transition_if(void);
};
#endif
