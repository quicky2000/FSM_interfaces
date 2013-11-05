
#ifndef _FSM_CONTEXT_IF_
#define _FSM_CONTEXT_IF_

#include "FSM_types.h"
#include <string>
#include <vector>

namespace FSM_interfaces
{
  class FSM_transition_if;

  class FSM_context_if
  {
  public:
    // Methods to implement
    virtual const std::string to_string(void)const=0;
    virtual void to_string(std::string &)const=0;
    virtual const FSM_types::transition_index_t get_nb_transitions(void)const=0;
    virtual const FSM_transition_if & get_transition(const FSM_types::transition_index_t &)const=0;
    virtual bool transitions_computed(void)const=0;

    // Virtual destructor
    inline ~FSM_context_if(void){};
  };
}
#endif
//EOF
