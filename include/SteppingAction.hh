/// \file SteppingAction.hh
/// \brief Definition for GeEnergyEfficiency::SteppingAction class

#ifndef GeEnergyEfficiencySteppingAction_h
#define GeEnergyEfficiencySteppingAction_h 1

#include "G4UserSteppingAction.hh"
#include "G4Step.hh"

namespace GeEnergyEfficiency
{
    class EventAction;
    class RunAction;

    class SteppingAction : public G4UserSteppingAction
    { 
        public:
        SteppingAction(EventAction* eventAction,RunAction* runAction);
        SteppingAction() = default;
        ~SteppingAction() override = default;
        void UserSteppingAction(const G4Step* step) override; 

        private:
        EventAction* fEventAction = nullptr;
        RunAction* fRunAction = nullptr;
    };
}

#endif
