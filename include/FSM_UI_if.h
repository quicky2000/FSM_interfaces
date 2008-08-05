#ifndef _FSM_UI_BASE_H_
#define _FSM_UI_BASE_H_

#include <string>
#include <map>
using namespace std;

class FSM_situation_if;

class FSM_UI_if
{
	public:
		// Methods to implement
		virtual void displaySituation(const FSM_situation_if *p_situation)=0;
		virtual string toString(void)const=0;

		// Virtual destructor
		virtual ~FSM_UI_if(void);
};

typedef FSM_UI_if *(*FSM_UI_creator)();

void registerFsmUi(string p_fsm_name,FSM_UI_creator p_creator,map<string,FSM_UI_creator> *p_factory);

#endif
