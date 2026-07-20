#include "G4RootAnalysisManager.hh"
#include "G4Run.hh"
#include "RunAction.hh"
#include "G4SystemOfUnits.hh"
#include "Randomize.hh"
#include "G4AccumulableManager.hh"
#include <cmath>
#include <typeinfo>

namespace GeEnergyEfficiency
{

RunAction::RunAction()
{
    //Create the analysis manager
    auto analysisManager = G4RootAnalysisManager::Instance();
    analysisManager->SetVerboseLevel(1);
    analysisManager->SetDefaultFileType("root");
    analysisManager->SetNtupleMerging(true);

    //Creating histograms
    analysisManager->CreateH1("GeEdep","Energy Deposited within the Germanium Detector",100,0,300*keV);
}

void RunAction::BeginOfRunAction(const G4Run* run)
{
    //Run start verification
    if (IsMaster())
    {
        G4cout << "Run Started" << G4endl;
    }

    //Getting the analysis manager
    auto analysisManager = G4RootAnalysisManager::Instance();

    //Open an output file
    G4String fileName = "GeEnergyEfficiency.root";
    analysisManager->OpenFile(fileName);
}

void RunAction::EndOfRunAction(const G4Run* run)
{
    auto analysisManager = G4RootAnalysisManager::Instance();

    //Output Statistics
    if (IsMaster())
    {
        //add statistics 
    }
    //write to the analysis file
    analysisManager->Write();
    analysisManager->CloseFile();

    if (IsMaster())
    {
        //run ended verification
        G4cout << "Run Finished" << G4endl;
    }
}
}
