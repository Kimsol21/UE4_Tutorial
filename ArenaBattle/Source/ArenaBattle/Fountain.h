// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Actor.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Fountain.generated.h" //�𸮾� ������Ʈ�� ���� �������� �׻� �ٿ���� �Ѵ�.

UCLASS() //�ش� Ŭ������ �𸮾� ������Ʈ���� �����ϱ� ���� ��ũ��.
class ARENABATTLE_API AFountain : public AActor  //����_API��� Ű���带 Ŭ���� ���� �տ� �߰������μ� �ٸ� ��⿡�� �ش� ��ü�� ������ �� �ִ�.
{
	GENERATED_BODY() //�𸮾� ������Ʈ���� ��Ÿ���� ��ũ��. UCLASS()�� ��Ʈ�� ����.
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned 
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *Body;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent *Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent *Splash;

	UPROPERTY(EditAnywhere, Category=ID)
	int32 ID;

	UPROPERTY(VisibleAnywhere)
	URotatingMovementComponent* Movement;
private:
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
	float RotateSpeed;
};