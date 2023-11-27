#include <vcl.h>
#pragma hdrstop
#include "Unit3.h"
#include "Unit7.h"

#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;

__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm7::OK_D_Button1Click(TObject *Sender)
{
	int x = StrToInt(Distance_From_Edit1->Text)-1, y = StrToInt(Distance_To_Edit2->Text)-1;
	int dist = dejkstra(x,y);
	Ans_Edit3->Text = dist;
}

