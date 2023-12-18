#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit7.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit5.h"
#include "Unit8.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
	EditVertexBut->Enabled = true;
}
void __fastcall TForm7::EditVertexButClick(TObject *Sender)
{
	AnsiString ansiName = Edit1->Text;
	std::string temp = ansiName.c_str();
	if(checkVertexExisting(temp)){
		AnsiString tempName = Edit1->Text;
	std::string name = tempName.c_str();
	int Form7idVertex = findVertexByName(name);

	TForm8 *Form2 = new TForm8(this);
		Form2->passID(Form7idVertex);
		Form2->ShowModal();
	Close();
	}
	else {
	Edit1->SetFocus();
		ShowMessage("Вершина с таким именем не найдена");
	}
}
