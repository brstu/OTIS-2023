//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;


bool isExisting1;
bool isExisting2;


int Form5idEdge1;
int Form5idEdge2;


//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
 isExisting1 = false;
 isExisting2 = false;

 Form5idEdge1 = -1;
 Form5idEdge2 = -1;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Check1Exit(TObject *Sender)
{
	AnsiString EditName = Check1->Text;
	std::string tempName = EditName.c_str();
	isExisting1 = checkVertexExisting(tempName);
	if(isExisting1 && isExisting2){
		EditButton->Enabled = true;
	}
	else if(!isExisting1){
	ShowMessage("Вершина с таким именем не найдена");
	Check1->SetFocus();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Check2Exit(TObject *Sender)
{
	AnsiString EditName = Check2->Text;
	std::string tempName = EditName.c_str();
	isExisting2 = checkVertexExisting(tempName);
	if(isExisting1 && isExisting2){
		EditButton->Enabled = true;
	}
	else if(!isExisting2){
	ShowMessage("Вершина с таким именем не найдена");
	Check2->SetFocus();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::EditButtonClick(TObject *Sender)
{
	AnsiString tempName = Check1->Text;
	std::string name = tempName.c_str();
	int id1 = findVertexByName(name);
	tempName = Check2->Text;
	name = tempName.c_str();
	int id2 = findVertexByName(name);

	Form5idEdge1 = findEdgeByIDS(id1,id2);
	Form5idEdge2 = findEdgeByIDS(id2,id1);

	if(Form5idEdge1 == -1 && Form5idEdge2 == -1){
		Check1->Text = "";
		Check2->Text = "";
		isExisting1 = false;
		isExisting2 = false;
		EditButton->Enabled = false;
	} else {
		TForm6 *Form2 = new TForm6(this);
        Form2->passIDS(Form5idEdge1, Form5idEdge2);
		Form2->ShowModal();
		Form5->Close();
	}
}
//---------------------------------------------------------------------------
