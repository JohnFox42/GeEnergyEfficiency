/// \file ActionInitialization.hh
/// \brief Definition of GeEnergyEfficiency::ActionInitialization()

#ifndef BasicDetectorActionInitialization_h
#define BasicDetectorActionInitialization_h 1

#include "G4VUserActionInitialization.hh"

namespace GeEnergyEfficiency
{
class ActionInitialization : public G4VUserActionInitialization
{
    public:
    ActionInitialization() = default;
    ~ActionInitialization() override = default;

    void Build() const override;
    void BuildForMaster() const override;
};
}
#endif
