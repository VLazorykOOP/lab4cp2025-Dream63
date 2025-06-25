#include "PharmacyManagement.h"
#include "PharmacyPosting.h"
#include "PharmacyFetching.h"

using namespace PracticeLab4;

void PharmacyManagement::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	PharmacyPosting^ inputForm = gcnew PharmacyPosting();
	inputForm->ShowDialog();
}

void PharmacyManagement::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	PharmacyFetching^ searchForm = gcnew PharmacyFetching();
	searchForm->ShowDialog();
}
