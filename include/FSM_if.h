
#ifndef FSM_IF_H
#define FSM_IF_H

#include <string>
#include <map>
#include <vector>

class FSM_situation_if;
class FSM_weighted_transition_index_if;

/**
   Class defining FSM public interface
**/
class FSM_if
{
 public:
  // Methods to implement
  virtual FSM_situation_if* getCurrentSituation(void)const=0;
  virtual void setCurrentSituation(FSM_situation_if* p_situation)=0;
  virtual void computeTransitions(void)=0;
  virtual void selectTransition(unsigned int p_transition_index)=0;
  virtual void configure(void)=0;
  virtual std::string toString(void)const=0;
  virtual std::string getFsmName(void)const=0;
  virtual void computeTransitionWeights(std::vector<FSM_weighted_transition_index_if*> &p_vector)const=0;

  //Virtual destructor
  virtual ~FSM_if(void);
};

// Defining object type which allow to create FSMs instances
typedef FSM_if *(*FSM_creator)();


void registerFsm(std::string p_FSM_type,FSM_creator p_creator,std::map<std::string,FSM_creator> *p_factory);

#endif /* FSM_IF_H */
