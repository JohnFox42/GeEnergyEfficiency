/// \file RunAction.hh
/// \brief Definition of GeEnergyEfficiency::RunAction

#ifndef GeEnergyEfficiencyRunAction_h
#define GeEnergyEfficiencyRunAction_h 1

#include "G4UserRunAction.hh"
#include "G4Accumulable.hh" 

class G4Run;

namespace GeEnergyEfficiency
{
    class RunAction : public G4UserRunAction
    {
        public:
        RunAction();
        ~RunAction() override = default;

        void BeginOfRunAction(const G4Run*) override;
        void EndOfRunAction(const G4Run*) override;
        void IterateBremCount();

        private:
        //declaring accumulable for bremcounts
        G4Accumulable<G4int> fBremCount = 0;
    };
}

#endif
