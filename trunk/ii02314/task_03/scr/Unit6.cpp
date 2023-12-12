//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

int idTemp;
int Form5idEdge1 = -1;
int Form5idEdge2 = -1;
int id1, id2;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm6::passIDS(int x1, int x2){
	Form5idEdge1 = x1;
	Form5idEdge2 = x2;
	id1 =  Form5idEdge1;
	id2 =  Form5idEdge2;


	if(Form5idEdge1 > Form5idEdge2)
		idTemp = Form5idEdge1;
	else
		idTemp = Form5idEdge1;

	NewWeight->Text = IntToStr(edges[idTemp].weight);

	NewR->Text = IntToStr(edges[idTemp].r);
	NewG->Text = IntToStr(edges[idTemp].g);
	NewB->Text = IntToStr(edges[idTemp].b);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::EditExitButClick(TObject *Sender)
{
	AnsiString text1 = NewR->Text;
	AnsiString text2 = NewG->Text;
	AnsiString text3 = NewB->Text;
	int r = StrToIntDef(text1, 0);
	int g = StrToIntDef(text2, 0);
	int b = StrToIntDef(text3, 0);
	roundRGB(r);
	roundRGB(g);
	roundRGB(b);

	AnsiString tempWeight = NewWeight->Text;
	int weight = StrToIntDef(tempWeight, 0);

	if(Form5idEdge1 > -1){
		edges[Form5idEdge1].weight = weight;
		edges[id1].r = r;
		edges[id1].g = g;
		edges[id1].b = b;
	}

	if(Form5idEdge2 > -1){
		edges[Form5idEdge2].weight = weight;
		edges[id2].r = r;
		edges[id2].g = g;
		edges[id2].b = b;
	}

	refreshGraph();
	Close();
}
//---------------------------------------------------------------------------
