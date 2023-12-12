//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
bool isExisting1;
bool isExisting2;

int findVertexByName(std::string name){
	for(int i = 0; i < vertexes.size();i++){
		if(vertexes[i].name == name){
			return vertexes[i].id;
		}
	}
    return -1;
}

bool checkVertexExisting(std::string name){
	for(int i = 0; i < vertexes.size(); i++){
		if(vertexes[i].name == name){
		return true;
		}
	}
	return false;
}

int findEdgeByIDS(int id1, int id2){
	for(int i = 0; i < graph[id1].size();i++){
		if(graph[id1][i].first == id2){
		ShowMessage(IntToStr(graph[id1][i].second));
			return graph[id1][i].second;
		}
	}
	return -1;
}
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	bool isExisting1 = false;
	bool isExisting2 = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FirstNameExit(TObject *Sender)
{
	AnsiString EditName = FirstName->Text;
	std::string tempName = EditName.c_str();
	isExisting1 = checkVertexExisting(tempName);
	if(isExisting1 && isExisting2){
		Button1->Enabled = true;
	}
	else if(!isExisting1){
	ShowMessage("¬ершина с таким именем не найдена");
	FirstName->SetFocus();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SecondNameExit(TObject *Sender)
{
	AnsiString EditName = SecondName->Text;
	std::string tempName = EditName.c_str();
	isExisting2 = checkVertexExisting(tempName);
	if(isExisting1 && isExisting2){
		Button1->Enabled = true;
	}
	else if(!isExisting2){
	ShowMessage("¬ершина с таким именем не найдена");
	SecondName->SetFocus();
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	AnsiString tempName = FirstName->Text;
	std::string name = tempName.c_str();
	int id1 = findVertexByName(name);
	tempName = SecondName->Text;
	name = tempName.c_str();
	int id2 = findVertexByName(name);

	//bool duplicate = findEdgeByIDS(id1, id2);
	if(findEdgeByIDS(id1,id2) > -1 || findEdgeByIDS(id2,id1) > -1){
		 FirstName->Clear();
		 SecondName->Clear();
		 isExisting2 = false;
		 isExisting1 = false;
		 Button1->Enabled = false;
		 ShowMessage("–ебро между этими вершинами уже существует.");
	}
	else {
        edge newEdge;
	newEdge.x1 = vertexes[id1].x;
	newEdge.y1 = vertexes[id1].y;
	newEdge.x2 = vertexes[id2].x;
	newEdge.y2 = vertexes[id2].y;

	newEdge.id = edges.size();
	idEdge++;

	AnsiString text1 = Edit4->Text;
	AnsiString text2 = Edit5->Text;
	AnsiString text3 = Edit6->Text;
	int r = StrToIntDef(text1, 0);
	int g = StrToIntDef(text2, 0);
	int b = StrToIntDef(text3, 0);
	roundRGB(r);
	roundRGB(g);
	roundRGB(b);
	newEdge.r = r;
	newEdge.g = g;
	newEdge.b = b;

	AnsiString tempWeight = EditWeight->Text;
	int weight = StrToIntDef(tempWeight, 0);
	newEdge.weight = weight;

	//newEdge.from = id1;
	//newEdge.to = id2;

	newEdge.isOriented = CheckBox1->Checked;

	edges.push_back(newEdge);
	graph[id1].push_back(std::make_pair(id2, newEdge.id));
	drawEdge(newEdge);

	if(!newEdge.isOriented){
		idEdge++;
		newEdge.id = edges.size();
		edges.push_back(newEdge);
		graph[id2].push_back(std::make_pair(id1, newEdge.id));
		drawEdge(newEdge);
	}

	drawVertex(vertexes[id1]);
	drawVertex(vertexes[id2]);
	}


}
//---------------------------------------------------------------------------
void __fastcall TForm3::ExitButtonClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

