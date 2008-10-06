#ifndef FSM_WEIGHTED_TRANSITION_INDEX_IF_H
#define FSM_WEIGHTED_TRANSITION_INDEX_IF_H

#include <string>

class FSM_weighted_transition_index_if
{
  
 public:
  virtual unsigned int getTransitionIndex(void)const=0;
  virtual unsigned int getWeight(void)const=0;
  virtual std::string getString(void)const=0;
  virtual bool operator<(const FSM_weighted_transition_index_if &p_object2)const=0;

  virtual ~FSM_weighted_transition_index_if(void);

 private:
  
};

#endif /* FSM_WEIGHTED_TRANSITION_INDEX_IF_H */
