#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include <string>
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

void roundRGB(int& x){
	if(x > 255)
		x = 255;
	if(x < 0)
		x = 0;
}
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	vertex newVertex;

	AnsiString text1 = RValue->Text;
	AnsiString text2 = GValue->Text;
	AnsiString text3 = BValue->Text;

	int r = StrToIntDef(text1, 0);
	int g = StrToIntDef(text2, 0);
	int b = StrToIntDef(text3, 0);

	roundRGB(r);
	roundRGB(g);
	roundRGB(b);

	newVertex.r = r;
	newVertex.g = g;
    newVertex.b = b;

	AnsiString tempName = NameColumn->Text;
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

void __fastcall TForm2::NameColumnExit(TObject *Sender)
{
	AnsiString EditName = NameColumn->Text;
	std::string tempName = EditName.c_str();
	for(int i = 0; i < vertexes.size(); i++){
		if(vertexes[i].name == tempName || tempName.empty()){
			ShowMessage("Name can not be empty ot doubled");
			NameColumn->SetFocus();
		}
	}
	Button1->Enabled = true;
}

