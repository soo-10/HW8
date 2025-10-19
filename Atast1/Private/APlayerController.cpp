// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerController.h"
#include "EnhancedInputSubsystems.h"


AAPlayerController::AAPlayerController()
	: InputMappingContext(nullptr),
	  MoveAction(nullptr),
	  JumpAction(nullptr),
	  LookAction(nullptr),
	  SprintAction(nullptr)
{
}

void AAPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer()) 
	{
		
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext) 
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}