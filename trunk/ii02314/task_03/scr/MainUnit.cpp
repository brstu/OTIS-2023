
#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "MakeVertex.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit12.h"
#include "Unit13.h"
#pragma package(smart_init)
#pragma resource "*.dfm"

#include <vector>
#include <string>
#include <cmath>
#include <utility>
TForm1 *Form1;


int idVertex;
int idEdge;
std::vector<edge> edges;
std::vector<vertex> vertexes;
std::vector<std::vector<std::pair<int,int>>> graph;
std::vector<std::vector<int>> adjMatrix;
int XX, YY;

void drawVertex(vertex temp){
	Form1->Canvas->Brush->Color = (TColor) RGB(temp.r, temp.g, temp.b);
	Form1->Canvas->Ellipse(temp.x,temp.y,temp.x+50,temp.y+50);
	System::UnicodeString unicodeStringName(temp.name.c_str());
	Form1->Canvas->TextOut(temp.x + 15,temp.y + 15,unicodeStringName);
}

void drawEdge(edge ed){
	//Form1->Canvas->Pen->Width=5;
	Form1->Canvas->Brush->Color = (TColor) RGB(ed.r, ed.g, ed.b);
	Form1->Canvas->MoveTo(ed.x1 + 25, ed.y1 + 25);
	Form1->Canvas->LineTo(ed.x2 + 25, ed.y2 + 25);
	Form1->Canvas->TextOut((ed.x1 + 50 + ed.x2) /2, (ed.y1 + 50 + ed.y2) /2, ed.weight);
}

void refreshGraph(){
	Form1->Canvas->FillRect(Form1->ClientRect);
	for(int i = 0; i < edges.size(); i++)
		drawEdge(edges[i]);
	for(int i = 0; i < vertexes.size(); i++)
		drawVertex(vertexes[i]);
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	idVertex = 0;
	idEdge = 0;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
	POINT cursorPos;
	while (true)
	{
			 if (GetCursorPos(&cursorPos)){
				XX = cursorPos.x;
				YY = cursorPos.y;
			 }
		if (GetAsyncKeyState(VK_LBUTTON) & 0x8000){
			TForm2 *Form = new TForm2(this);
			Form->ShowModal();
			break;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Form1->Width = Screen->Width;
	Form1->Height = Screen->Height;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
	if(vertexes.size() < 2)
		ShowMessage("Not enough vertexes");
	else{
		TForm3 *Form = new TForm3(this);
		Form->ShowModal();
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DeleteVertex1Click(TObject *Sender)
{
	if(vertexes.empty())
		ShowMessage("Not enough vertexes");
	else{
		TForm9 *Form = new TForm9(this);
		Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteEdge1Click(TObject *Sender)
{
	if(edges.empty())
		ShowMessage("Not enough edges");
	else{
		TForm4 *Form = new TForm4(this);
		Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteEdge2Click(TObject *Sender)
{
	refreshGraph();
	if(edges.empty())
		ShowMessage("Not enough vertexes");
	else{
		TForm5 *Form = new TForm5(this);
		Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteVertex2Click(TObject *Sender)
{
	 if(vertexes.empty())
		ShowMessage("Not enough vertexes");
	else{
		TForm7 *Form = new TForm7(this);
		Form->ShowModal();
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Algorithm2Click(TObject *Sender)
{
	  TForm10 *Form = new TForm10(this);
	  Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IncMatrix1Click(TObject *Sender)
{
	  TForm11 *Form = new TForm11(this);
	  Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IncMatrix2Click(TObject *Sender)
{
	 TForm12 *Form = new TForm12(this);
	  Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShowInfo1Click(TObject *Sender)
{
	 TForm13 *Form = new TForm13(this);
	  Form->ShowModal();
}
//---------------------------------------------------------------------------

