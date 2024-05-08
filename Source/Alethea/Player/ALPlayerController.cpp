// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ALPlayerController.h"
#include "UI/ALHUDWidget.h"

AALPlayerController::AALPlayerController()
{
	static ConstructorHelpers::FClassFinder<UALHUDWidget> ALHUDWidgetRef(TEXT("/Game/Alethea/UI_Widget/PlayerWidget/WBP_HUD_InGame.WBP_HUD_InGame_C"));
	if (ALHUDWidgetRef.Class != nullptr)
		ALHUDWidgetClass = ALHUDWidgetRef.Class;
	
}


void AALPlayerController::BeginPlay()
{
	Super::BeginPlay();

	/********************************
			Input GameMode 
	*********************************/
	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);


	/********************************
			 Create Widget
	*********************************/
	ALHUDWidget = CreateWidget<UALHUDWidget>(this, ALHUDWidgetClass);
	if (ALHUDWidget != nullptr)
	{
		ALHUDWidget->AddToViewport();
	}
}
