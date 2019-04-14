// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IPlayScene.h"
#include "Modules/ModuleManager.h"

class FMFPlaySceneModule : public IPlayScene
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual TWeakObjectPtr<UTextureRenderTarget2D> GetTextureRenderTarget2D() override;
	virtual void SetTextureRenderTarget2D(UTextureRenderTarget2D* TexRenderTarget2D) override;
private:
	TWeakObjectPtr<UTextureRenderTarget2D> TextureRenderTarget2D;
};
