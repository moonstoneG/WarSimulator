


#include "ReplayGameInstance.h"

UReplayGameInstance::UReplayGameInstance()
{
	RecordingName = "MyReplay";
	FriendRecordingName = "My Replay";
}

void UReplayGameInstance::StartReording()
{
	StartRecordingReplay(RecordingName,FriendRecordingName);
}

void UReplayGameInstance::StopRecording()
{
	StopRecordingReplay();
}

void UReplayGameInstance::StartReplay()
{
	PlayReplay(RecordingName,nullptr);
}
