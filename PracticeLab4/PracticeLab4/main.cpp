#include "PharmacyManagement.h"

using namespace PracticeLab4;

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PharmacyManagement());
	return 0;
}
