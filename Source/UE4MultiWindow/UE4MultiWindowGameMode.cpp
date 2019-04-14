// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4MultiWindowGameMode.h"
#include "UE4MultiWindowPawn.h"
#include "UE4MultiWindowHud.h"
#include "PlaySceneSlate.h"

AUE4MultiWindowGameMode::AUE4MultiWindowGameMode()
{
	DefaultPawnClass = AUE4MultiWindowPawn::StaticClass();
	HUDClass = AUE4MultiWindowHud::StaticClass();
}
void AUE4MultiWindowGameMode::BeginPlay()
{
	Super::BeginPlay();
	FPlaySceneSlate::Initialize();

}
void AUE4MultiWindowGameMode::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
	FPlaySceneSlate::Shutdown();
}