#include "Statemachine.h"

namespace Engine
{
	void Statemachine::addState(statePtr newState, bool isreplacing)
	{
		this->tempState = std::move(newState); //Moves the given state to tempState
		this->isAdding = true;
		this->isReplacing = isreplacing;
	}
	void Statemachine::removeState()
	{
		this->isRemoving = true;
	}
	void Statemachine::processStateChanges()
	{
		if (isAdding)
		{
			if (!this->states.empty())
			{
				if (this->isReplacing)
					this->states.pop_back();

				else
					this->states.back()->pause();
			}
			this->states.push_back(std::move(this->tempState)); //Moves tempState to the array
			this->states.back()->run(); //And runs the newest state
			this->isAdding = false;
		}
		if (isRemoving)
		{
			this->states.pop_back();
			if (!this->states.empty())
				this->states.back()->resume();

			this->isRemoving = false;
		}
	}
	statePtr &Statemachine::currentState()
	{
		return this->states.back();
	}
}