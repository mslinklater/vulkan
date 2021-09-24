#pragma once

#include <vector>

#include "Errors.h"

// Encapsulate the Vulkan renderer

class Renderer
{
public:
	Renderer() {}
	virtual ~Renderer() {}

	Error Init();
	Error Shutdown();

private:
	std::vector<const char*> mLayers;
};
