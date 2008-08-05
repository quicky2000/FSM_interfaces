
#ifndef _FSM_CONTEXT_IF_
#define _FSM_CONTEXT_IF_

#include <string>
#include <vector>
using namespace std;

class FSM_transition_if;

class FSM_context_if
{
	public:
		// Methods to implement
		virtual string toString(void)const=0;
		virtual unsigned int getNbTransitions(void)const=0;
		virtual FSM_transition_if* getTransition(unsigned int p_index)const=0;

		// Virtual destructor
		virtual ~FSM_context_if(void);
};
#endif
