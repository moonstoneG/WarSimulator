

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ReplayGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class WARSIMULATOR_API UReplayGameInstance : public UGameInstance
{
	GENERATED_BODY()

	public:
	
	UReplayGameInstance();
	UPROPERTY(EditDefaultsOnly,Category = "Replay")
	FString RecordingName;
	UPROPERTY(EditDefaultsOnly,Category = "Replay")
	FString FriendRecordingName;
	
	UFUNCTION(BlueprintCallable,Category = "Replay")
	void StartReording();
	UFUNCTION(BlueprintCallable,Category = "Replay")
	void StopRecording();
	UFUNCTION(BlueprintCallable,Category = "Replay")
	void StartReplay();
	
	
	
};
