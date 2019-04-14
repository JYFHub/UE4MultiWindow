// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MFPlayScene.h"

#define LOCTEXT_NAMESPACE "FMFPlaySceneModule"

void FMFPlaySceneModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FMFPlaySceneModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
TWeakObjectPtr<UTextureRenderTarget2D> FMFPlaySceneModule::GetTextureRenderTarget2D()
{
	return TextureRenderTarget2D;
}

void FMFPlaySceneModule::SetTextureRenderTarget2D(UTextureRenderTarget2D * TexRenderTarget2D)
{
	TextureRenderTarget2D = TexRenderTarget2D;
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMFPlaySceneModule, MFPlayScene)