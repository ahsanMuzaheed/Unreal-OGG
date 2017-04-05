// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Factories/Factory.h"
#include "OggAssetFactory.generated.h"


/**
 * Implements a factory for UMidiAsset objects.
 */
UCLASS(hidecategories=Object)
class UOggAssetFactory
	: public UFactory
{
	GENERATED_UCLASS_BODY()

public:

	// UFactory Interface

	virtual UObject* FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn) override;
};
