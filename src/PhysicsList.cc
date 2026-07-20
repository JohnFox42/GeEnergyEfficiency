#include "PhysicsList.hh"
#include "G4EmPenelopePhysics.hh"

namespace GeEnergyEfficiency
{
    PhysicsList::PhysicsList()
    {
        RegisterPhysics(new G4EmPenelopePhysics());
    }
} 
