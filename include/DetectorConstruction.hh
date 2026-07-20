/// \file DetectorConstruction.hh
/// \brief Definition of GeEnergyEfficiency::DetectorConstruction Class
#ifndef BasicDetectorDetectorConstruction_h
#define BasicDetectorDetectorConstruction_h 1

#include "G4VUserDetectorConstruction.hh"

class G4VPhysicalVolume;
class G4LogicalVolume;

namespace GeEnergyEfficiency
{
class DetectorConstruction : public G4VUserDetectorConstruction
{
    public:
    DetectorConstruction()= default;
    ~DetectorConstruction() override = default;

    G4VPhysicalVolume* Construct() override;

    G4LogicalVolume* GetGeDetector() const { return fGeDetector; }

    protected:
    G4LogicalVolume* fGeDetector = nullptr;
};
}

#endif
