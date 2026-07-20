/// \file PrimaryGeneratorAction.hh
/// \brief Definition of the GeEnergyEfficiency::PrimaryGeneratorAction class

#ifndef GeEnergyEfficiencyPrimaryGeneratorAction_h
#define GeEnergyEfficiencyPrimaryGeneratorAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"

class G4ParticleGun;
class G4Event;

namespace GeEnergyEfficiency
{
    class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
    {
        public:
        PrimaryGeneratorAction();
        ~PrimaryGeneratorAction() override;
        void GeneratePrimaries(G4Event*) override;
        const G4ParticleGun* GetParticleGun() const { return fParticleGun; }

        private:
        G4ParticleGun* fParticleGun=nullptr;
    };
}

#endif
