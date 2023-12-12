//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit1.h"
#include "Unit2.h"
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
	Edit1->Text = uString;
	Edit2->Text = IntToStr(vertexes[Form7id].r);
	Edit3->Text = IntToStr(vertexes[Form7id].g);
	Edit4->Text = IntToStr(vertexes[Form7id].b);
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button1Click(TObject *Sender)
{
    AnsiString text1 = Edit2->Text;
	AnsiString text2 = Edit3->Text;
	AnsiString text3 = Edit4->Text;

	int r = StrToIntDef(text1, 0);
	int g = StrToIntDef(text2, 0);
	int b = StrToIntDef(text3, 0);

	roundRGB(r);
	roundRGB(g);
	roundRGB(b);

	vertexes[Form7id].r = r;
	vertexes[Form7id].g = g;
	vertexes[Form7id].b = b;

	AnsiString tempName = Edit1->Text;
	vertexes[Form7id].name = tempName.c_str();

	refreshGraph();
	Close();
}
//---------------------------------------------------------------------------
