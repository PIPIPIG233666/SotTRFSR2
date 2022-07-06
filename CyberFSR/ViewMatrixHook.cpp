#include "pch.h"
#include "ViewMatrixHook.h"

ViewMatrixHook::ViewMatrixHook()
{
}

float ViewMatrixHook::GetFov()
{
	// default vertical FOV of 57 + maximum slider value of 20
	return 77.0f;
}

float ViewMatrixHook::GetFarPlane()
{
	return std::numeric_limits<float>::infinity();
}

float ViewMatrixHook::GetNearPlane()
{
	return 0;
}
