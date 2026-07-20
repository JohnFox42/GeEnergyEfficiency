#include "SteppingAction.hh"
#include "DetectorConstruction.hh"
#include "EventAction.hh"
#include "G4Step.hh"
#include "G4VPhysicalVolume.hh"
#include "G4RunManager.hh"
#include "RunAction.hh"
#include "G4RootAnalysisManager.hh"

namespace GeEnergyEfficiency
{
    
    SteppingAction::SteppingAction(EventAction* eventAction,RunAction* runAction)
    : fEventAction(eventAction), fRunAction(runAction)
    {
    }
    

    void SteppingAction::UserSteppingAction(const G4Step* step)
    {
        auto analysisManager = G4RootAnalysisManager::Instance();

        //Gets the detector construction
        auto detectorConstruction = static_cast<const DetectorConstruction*>(G4RunManager::GetRunManager()->GetUserDetectorConstruction());
        auto* GeDetector = detectorConstruction->GetGeDetector();

        auto* preVolume = step->GetPreStepPoint()->GetPhysicalVolume()->GetLogicalVolume();

        if (preVolume == GeDetector)
        {
            fEventAction->AddEdep(step->GetTotalEnergyDeposit());
        }
    }
}
