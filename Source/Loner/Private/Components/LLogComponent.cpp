// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/LLogComponent.h"

// Sets default values for this component's properties
ULLogComponent::ULLogComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void ULLogComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void ULLogComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

