#pragma once
#include "CoreMinimal.h"
#include "UserProfile.generated.h"

UCLASS()
class UUserProfile : public UObject
{
	GENERATED_BODY()

public:
	UUserProfile();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Password;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Points;
};
