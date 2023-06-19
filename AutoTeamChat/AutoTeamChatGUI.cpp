#include "pch.h"
#include "AutoTeamChat.h"

/* Plugin Settings Window code here
std::string AutoTeamChat::GetPluginName() {
	return "AutoTeamChat";
}

void AutoTeamChat::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> AutoTeamChat
void AutoTeamChat::RenderSettings() {
	ImGui::TextUnformatted("AutoTeamChat plugin settings");
}
*/

/*
// Do ImGui rendering here
void AutoTeamChat::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string AutoTeamChat::GetMenuName()
{
	return "autoteamchat";
}

// Title to give the menu
std::string AutoTeamChat::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void AutoTeamChat::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool AutoTeamChat::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool AutoTeamChat::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void AutoTeamChat::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void AutoTeamChat::OnClose()
{
	isWindowOpen_ = false;
}
*/
