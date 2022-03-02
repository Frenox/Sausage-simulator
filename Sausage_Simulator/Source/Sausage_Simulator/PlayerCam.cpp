// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCam.h"

// Sets default values
APlayerCam::APlayerCam()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCam::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCam::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCam::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

