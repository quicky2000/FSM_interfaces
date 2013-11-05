
#ifndef _FSM_SITUATION_IF_
#define _FSM_SITUATION_IF_

#include <string>

namespace FSM_interfaces
{
  class FSM_context_if;

  class FSM_situation_if
  {
  public:
    // Methods to implement
    virtual FSM_context_if* get_current_context(void)const=0;
    virtual const std::string to_string(void)const=0;
    virtual void to_string(std::string &)const=0;
    virtual const std::string get_string_id(void)const=0;
    virtual void get_string_id(std::string &)const=0;
    virtual bool is_valid(void)const=0;
    virtual void set_invalid(void)=0;
    virtual bool is_final(void)const=0;
    virtual bool less(const FSM_situation_if * p_object2)const=0;
    
    // Virtual destructor
    inline virtual ~FSM_situation_if(void){};
  };
}
#endif
//EOF
