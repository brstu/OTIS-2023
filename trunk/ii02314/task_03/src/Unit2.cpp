//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

void roundRGB(int& x){
	if(x > 255)
		x = 255;
	if(x < 0)
		x = 0;
}
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	vertex newVertex;

	AnsiString text1 = Edit2->Text;
	AnsiString text2 = Edit3->Text;
	AnsiString text3 = Edit4->Text;

	int r = StrToIntDef(text1, 0);
	int g = StrToIntDef(text2, 0);
	int b = StrToIntDef(text3, 0);

	roundRGB(r);
	roundRGB(g);
	roundRGB(b);

	newVertex.r = r;
	newVertex.g = g;
    newVertex.b = b;

	AnsiString tempName = Edit1->Text;
	newVertex.name = tempName.c_str();

	newVertex.x = XX;
	newVertex.y = YY;

	newVertex.id = vertexes.size();
	idVertex++;

	vertexes.push_back(newVertex);
	std::vector<std::pair<int, int>> emptyVec;
	graph.push_back(emptyVec);
	drawVertex(newVertex);
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit1Exit(TObject *Sender)
{
	AnsiString EditName = Edit1->Text;
	std::string tempName = EditName.c_str();
	for(int i = 0; i < vertexes.size(); i++){
		if(vertexes[i].name == tempName || tempName.empty()){
			ShowMessage("Имя не должно повторяться или быть пустым.");
			Edit1->SetFocus();
		}
	}
	Button1->Enabled = true;
}
//---------------------------------------------------------------------------

