#ifndef _FSM_UI_BASE_H_
#define _FSM_UI_BASE_H_

#include <string>
#include <map>

namespace FSM_interfaces
{
  class FSM_situation_if;

  class FSM_UI_if
  {
  public:
    // Methods to implement
    virtual void display_situation(const FSM_situation_if & p_situation)=0;
    virtual const std::string & get_class_name(void)const=0;
  
    // Virtual destructor
    inline virtual ~FSM_UI_if(void){}
  };

  typedef FSM_UI_if & (*FSM_UI_creator_t)();

  void register_fsm_ui(const std::string & p_fsm_name,
		       FSM_UI_creator_t p_creator,
		       std::map<std::string,FSM_UI_creator_t> & p_factory);
}
#endif
//EOF
