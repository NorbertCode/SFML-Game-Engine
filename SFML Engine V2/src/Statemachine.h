#pragma once
#include <memory>
#include <vector>
#include "StateBase.h"

namespace Engine
{
	typedef std::unique_ptr<StateBase> statePtr; //A pointer at StateBase

	class Statemachine
	{
		bool isAdding, isRemoving, isReplacing; //If one of these is true then it'll do that action
		statePtr tempState; //A temporary state
		std::vector<statePtr> states; //An array of states
	public:
		Statemachine() {};
		~Statemachine() {};

		void addState(statePtr newState, bool isreplacing=true); //Tells the processStateChanges() method to add a state
		void removeState(); //Tells the processStateChanges() method to remove a state
		void processStateChanges();
		statePtr& currentState(); //Returns the current state
	};
}


