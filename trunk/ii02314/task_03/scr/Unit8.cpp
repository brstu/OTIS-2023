//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "MainUnit.h"
#include "MakeVertex.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;

int Form7id;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{   Button1->Enabled = true;
}

void __fastcall TForm8::passID(int x1){
	Form7id = x1;

	UnicodeString uString = UnicodeString(vertexes[Form7id].name.c_str());
	NewVertexName->Text = uString;
	RRR->Text = IntToStr(vertexes[Form7id].r);
	GGG->Text = IntToStr(vertexes[Form7id].g);
	BBB->Text = IntToStr(vertexes[Form7id].b);
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button1Click(TObject *Sender)
{
	AnsiString text1 = RRR->Text;
	AnsiString text2 = GGG->Text;
	AnsiString text3 = BBB->Text;

	int r = StrToIntDef(text1, 0);
	int g = StrToIntDef(text2, 0);
	int b = StrToIntDef(text3, 0);

	roundRGB(r);
	roundRGB(g);
	roundRGB(b);

	vertexes[Form7id].r = r;
	vertexes[Form7id].g = g;
	vertexes[Form7id].b = b;

	AnsiString tempName = NewVertexName->Text;
	vertexes[Form7id].name = tempName.c_str();

	refreshGraph();
	Close();
}
//---------------------------------------------------------------------------
