#include "PalMapObjectModelConnectorRoof.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorRoof::UPalMapObjectModelConnectorRoof() {
}

void UPalMapObjectModelConnectorRoof::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorRoof, FrontConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorRoof, BackConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorRoof, LeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorRoof, RightConnectInfo);
}


