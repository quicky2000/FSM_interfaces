/*    This file is part of FSM_interfaces
      The aim of this software is to provided generic facilities for FSM analyzis
      Copyright (C) 2017  Julien Thevenon ( julien_thevenon at yahoo.fr )

      This program is free software: you can redistribute it and/or modify
      it under the terms of the GNU General Public License as published by
      the Free Software Foundation, either version 3 of the License, or
      (at your option) any later version.

      This program is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.

      You should have received a copy of the GNU General Public License
      along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#ifdef FSM_INTERFACES_SELF_TEST

#include "FSM_weighted_transition_index_if.h"

class FSM_weighted_transition_index: public FSM_interfaces::FSM_weighted_transition_index_if
{
  public:
  private:
};

#include "FSM_transition_if.h"

class FSM_transition: public FSM_interfaces::FSM_transition_if
{
  public:
    const std::string
    to_string(void) const override
    {
        return "FSM_transition";
    }

    void
    to_string(std::string & p_string) const override
    {
        p_string = "FSM_transition";
    }

  private:
};
#include "FSM_context_if.h"

class FSM_context: public FSM_interfaces::FSM_context_if
{
  public:
    const std::string
    to_string(void) const override
    {
        return "";
    }

    void
    to_string(std::string & p_string) const override
    {
        p_string = "";
    }

    FSM_interfaces::FSM_types::transition_index_t
    get_nb_transitions(void) const override
    {
        return 0;
    }

    const FSM_interfaces::FSM_transition_if &
    get_transition(const FSM_interfaces::FSM_types::transition_index_t & index) const override
    {
        return m_transition;
    }

    bool
    transitions_computed(void) const override
    {
        return false;
    }

    void
    remove_transitions(void) override
    {

    }


  private:
    FSM_transition m_transition;
};

#include "FSM_situation_if.h"

class FSM_situation: public FSM_interfaces::FSM_situation_if
{
  public:
    FSM_interfaces::FSM_context_if *
    get_current_context(void) const override
    {
        return nullptr;
    }

    const std::string
    to_string(void) const override
    {
        return "FSM_Situation";
    }

    void
    to_string(std::string & p_string) const override
    {
        p_string = "FSM_Situation";
    }

    const std::string
    get_string_id(void) const override
    {
        return nullptr;
    }

    void
    get_string_id(std::string & string) const override
    {

    }

    bool
    is_valid(void) const override
    {
        return false;
    }

    bool
    is_final(void) const override
    {
        return false;
    }

    void
    set_invalid(void) override
    {

    }

    bool
    less(const FSM_interfaces::FSM_situation_if *p_object2) const override
    {
        return false;
    }

  private:
};

#include "FSM_if.h"

class FSM: public FSM_interfaces::FSM_if
{
  public:
    FSM_interfaces::FSM_situation_if & get_current_situation(void)const{return *m_situation;}

    void
    set_current_situation(FSM_interfaces::FSM_situation_if & p_situation) override
    {
        m_situation = dynamic_cast<FSM_situation*>(&p_situation);
    }

    void
    compute_transitions(void) override
    {

    }

    void
    select_transition(const FSM_interfaces::FSM_types::transition_index_t & p_transition_index) override
    {

    }

    void
    apply_transition(const FSM_interfaces::FSM_types::transition_index_t & p_transition_index) override
    {

    }

    void
    revert(void) override
    {

    }

    void
    configure(void) override
    {

    }

    const std::string &
    get_class_name(void) const override
    {
        return m_class_name;
    }

    const std::string &
    get_fsm_name(void) const override
    {
        return m_class_name;
    }

    void
    compute_transition_weights(std::vector<FSM_interfaces::FSM_weighted_transition_index_if *> & vector) const override
    {

    }

  private:
    FSM_situation *m_situation;
    static const std::string m_class_name;
};

const std::string FSM::m_class_name = "FSM";

#include "FSM_UI_if.h"

class FSM_UI: public FSM_interfaces::FSM_UI_if
{
  public:
    void
    display_situation(const FSM_interfaces::FSM_situation_if & p_situation) override
    {

    }

    const std::string &
    get_class_name(void) const override
    {
        return m_class_name;
    }

  private:
    static const std::string m_class_name;
};

const std::string FSM_UI::m_class_name = "FSM_UI";

int main(int argc, char ** argv)
{
    FSM l_FSM;
    FSM_transition l_transition;
    FSM_context l_context;
    FSM_UI l_FSM_ui;
}
#endif // FSM_INTERFACES_SELF_TEST
//EOF
