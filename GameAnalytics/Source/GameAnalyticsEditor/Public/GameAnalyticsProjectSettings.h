// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "GameAnalyticsProjectSettings.generated.h"

UCLASS(config=Engine, defaultconfig)
class UGameAnalyticsProjectSettings : public UObject
{
    GENERATED_UCLASS_BODY()
    
public:
    
    // Game Key
    UPROPERTY(Config, EditAnywhere, Category=IosSetup, Meta=(ToolTip="Your GameAnalytics Game Key - copy/paste from the GA website or log in to autofill it."))
    FString IosGameKey;
    
    // Secret Key
    UPROPERTY(Config, EditAnywhere, Category=IosSetup, Meta=(ToolTip="Your GameAnalytics Secret Key - copy/paste from the GA website or log in to autofill it."))
	FString IosSecretKey;

	// Build
	UPROPERTY(Config, EditAnywhere, Category = IosSetup, Meta=(ToolTip="The current version of the game. Updating the build name for each test version of the game will allow you to filter by build when viewing your data on the GA website."))
	FString IosBuild = "0.1";
    
    // Game Key
    UPROPERTY(Config, EditAnywhere, Category=AndroidSetup, Meta=(ToolTip="Your GameAnalytics Game Key - copy/paste from the GA website or log in to autofill it."))
    FString AndroidGameKey;
    
    // Secret Key
    UPROPERTY(Config, EditAnywhere, Category=AndroidSetup, Meta=(ToolTip="Your GameAnalytics Secret Key - copy/paste from the GA website or log in to autofill it."))
    FString AndroidSecretKey;
	
	// Build
	UPROPERTY(Config, EditAnywhere, Category = AndroidSetup, Meta=(ToolTip="The current version of the game. Updating the build name for each test version of the game will allow you to filter by build when viewing your data on the GA website."))
	FString AndroidBuild = "0.1";

    // Custom Dimensions 01
    UPROPERTY(Config, EditAnywhere, Category=CustomDimensions, Meta=(ToolTip="List of custom dimensions 01."))
    TArray<FString> CustomDimensions01;

    // Custom Dimensions 02
    UPROPERTY(Config, EditAnywhere, Category=CustomDimensions, Meta=(ToolTip="List of custom dimensions 02."))
    TArray<FString> CustomDimensions02;
    
    // Custom Dimensions 03
    UPROPERTY(Config, EditAnywhere, Category=CustomDimensions, Meta=(ToolTip="List of custom dimensions 03."))
    TArray<FString> CustomDimensions03;
    
    // Resource Currencies
    UPROPERTY(Config, EditAnywhere, Category=ResourceTypes, Meta=(ToolTip="List of Resource Currencies."))
    TArray<FString> ResourceCurrencies;
    
    // Resource Item Types
    UPROPERTY(Config, EditAnywhere, Category=ResourceTypes, Meta=(ToolTip="List of Resource Item Types."))
    TArray<FString> ResourceItemTypes;
    
    // Info Log Build
    UPROPERTY(Config, EditAnywhere, Category=Advanced, Meta=(ToolTip="Use custom id. Define your own custom defined user id to send with events. PLEASE NOTICE: When using custom id you need to remember GameAnalytics will first be fully initialized when you have set the custom id. No events can be sent before GameAnalytics is fully initialized."))
    bool UseCustomId = false;
    
    // Submit Errors
    //UPROPERTY(Config, EditAnywhere, Category=Advanced)
    //bool SubmitErrors = true;
    
    // Submit Average Frames Per Second
    //UPROPERTY(Config, EditAnywhere, Category=Advanced)
    //bool SubmitAverageFPS = true;
    
    // Submit Critical Frames Per Second
    //UPROPERTY(Config, EditAnywhere, Category=Advanced)
    //bool SubmitCriticalFPS = true;
    
    // Info Log Editor
    //UPROPERTY(Config, EditAnywhere, Category=Debug)
    //bool InfoLogEditor = true;
    
    // Info Log Build
    UPROPERTY(Config, EditAnywhere, Category=Debug, Meta=(ToolTip="Show info messages from GA in builds (f.x. Xcode for iOS)."))
    bool InfoLogBuild = true;
    
    // Verbose Log Build
    UPROPERTY(Config, EditAnywhere, Category=Debug, Meta=(ToolTip="Show full info messages from GA in builds (f.x. Xcode for iOS). Noet that this option includes long JSON messages sent to the server."))
    bool VerboseLogBuild = false;
};