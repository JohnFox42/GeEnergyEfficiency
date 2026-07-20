/// \file PhysicsList.hh
/// \brief Sets up Penelope physics list

#ifndef PhysicsList_h
#define PhysicsList_h 1

#include "G4VModularPhysicsList.hh"
#include "G4EmPenelopePhysics.hh"

namespace GeEnergyEfficiency
{
    class PhysicsList : public G4VModularPhysicsList
    {
        public:
        PhysicsList();
    };
}
#endif
