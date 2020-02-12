#include "SandboxLayer.h"

using namespace GLCore;
using namespace GLCore::Utils;

SandboxLayer::SandboxLayer()
{
}

SandboxLayer::~SandboxLayer()
{
}

void SandboxLayer::OnAttach()
{
	EnableGLDebugging();

	// Init here
	glClearColor(0.6f, 0.1f, 0.1f, 1.0f);
}

void SandboxLayer::OnDetach()
{
	// Shutdown here
}

void SandboxLayer::OnEvent(Event& event)
{
	// Events here
}

void SandboxLayer::OnUpdate(Timestep ts)
{
	// Render here
	glClear(GL_COLOR_BUFFER_BIT);
}

void SandboxLayer::OnImGuiRender()
{
	// ImGui here
}
