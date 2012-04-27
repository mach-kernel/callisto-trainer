#include "stdafx.h"
#include "gui.h"
#include "dllmain.h"
#include "CTMain.h"

using namespace CallistoTrainer;


[STAThreadAttribute]
DWORD WINAPI CreateGUIThread(__in LPVOID lParam)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew CTMain());
	return 0;

}




