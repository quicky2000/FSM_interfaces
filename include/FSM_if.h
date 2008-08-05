
#ifndef _FSM_IF_H_
#define _FSM_IF_H_

#include <string>
#include <map>
using namespace std;

class FSM_situation_if;

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
		virtual string toString(void)const=0;
		virtual string getFsmName(void)const=0;

		//Virtual destructor
		virtual ~FSM_if(void);
};

// Defining object type which allow to create FSMs instances
typedef FSM_if *(*FSM_creator)();


void registerFsm(string p_FSM_type,FSM_creator p_creator,map<string,FSM_creator> *p_factory);

#endif
