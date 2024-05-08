// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ALPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ALETHEA_API AALPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AALPlayerController();

	// Blueprint Edit
	UFUNCTION(BlueprintImplementableEvent, Category = Game, Meta = (DisplayName = "ReceivePausedCpp"))
	void k2_PausedWidget();


protected:
	virtual void BeginPlay() override;
	
	/***************************************************
	
	                 InGame HUD Section

	****************************************************/
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	TSubclassOf<class UALHUDWidget> ALHUDWidgetClass;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = HUD)
	TObjectPtr<class UALHUDWidget> ALHUDWidget;
};
