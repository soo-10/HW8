// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "ACharacter.h"
AMyGameMode::AMyGameMode() 
{
	DefaultPawnClass = AACharacter::StaticClass();

	PlayerControllerClass = APlayerController::StaticClass();
}
