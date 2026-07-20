/// \file EventAction.hh
/// \brief 

#ifndef BasicDetectorEventAction_h
#define BasicDetectorEventaction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"
#include "RunAction.hh"
#include <map>

namespace GeEnergyEfficiency
{
    class RunAction;

    class EventAction : public G4UserEventAction
    {
        public:
        EventAction(RunAction* runAction);
        ~EventAction() override=default;

        void BeginOfEventAction(const G4Event*) override;
        void EndOfEventAction(const G4Event*) override;

        void AddEdep(G4double edep);

        protected:
        G4double PhotonEdep = 0.;

        private:
        RunAction* fRunAction = nullptr;
    };
}

#endif 
