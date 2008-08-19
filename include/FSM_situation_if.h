
#ifndef _FSM_SITUATION_IF_
#define _FSM_SITUATION_IF_

#include <string>
using namespace std;

class FSM_context_if;

class FSM_situation_if
{
 public:
  // Methods to implement
  virtual FSM_context_if* getCurrentContext(void)const=0;
  virtual string toString(void)const=0;
  virtual string getUniqueId(void)const=0;
  
  // Virtual destructor
  virtual ~FSM_situation_if(void);
};
#endif
