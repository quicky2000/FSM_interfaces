#ifndef FSM_WEIGHTED_TRANSITION_INDEX_IF_H
#define FSM_WEIGHTED_TRANSITION_INDEX_IF_H

#include "FSM_types.h"
#include <string>

namespace FSM_interfaces
{
  class FSM_weighted_transition_index_if
  {
  public:
    virtual const FSM_types::transition_index_t & get_transition_index(void)const=0;
    virtual const FSM_types::transition_weight_t & get_weight(void)const=0;
    virtual const std::string get_string(void)const=0;
    virtual void get_string(std::string &)const=0;
    virtual bool operator<(const FSM_weighted_transition_index_if & p_object2)const=0;
    
    inline virtual ~FSM_weighted_transition_index_if(void){}
    
  private:
    
  };
}
#endif /* FSM_WEIGHTED_TRANSITION_INDEX_IF_H */
//EOF
