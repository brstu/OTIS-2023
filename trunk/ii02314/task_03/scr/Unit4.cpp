#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
bool isExisting1;
bool isExisting2;

void deleteEdges(int id1, int id2){
	int idEdge1 = findEdgeByIDS(id1,id2);
   int idEdge2 = findEdgeByIDS(id2,id1);

	bool isChanged = false;

   	if(idEdge1 > idEdge2 && idEdge2 != -1 && idEdge1 != -1){
		if(idEdge1 == edges.size() - 1){
			edges.pop_back();
		}
		else {
		edges.erase(edges.begin() + idEdge1);
		}

		if(idEdge2 == edges.size() - 1){
			edges.pop_back();
		}
		else {
		edges.erase(edges.begin() + idEdge2);
		}
   }

   else if(idEdge1 < idEdge2 && idEdge1 != -1 && idEdge2 != -1){
		if(idEdge2 == edges.size() - 1){
			edges.pop_back();
		}
		else {
		edges.erase(edges.begin() + idEdge2);
		}

		if(idEdge1 == edges.size() - 1){
			edges.pop_back();
		}
		else {
		edges.erase(edges.begin() + idEdge1);
		}
   }

   else if(idEdge1 == idEdge2){
		ShowMessage("–ебро между этими вершинами не существует.");
   }

   else {
		int idFinale;
		if(idEdge1 > idEdge2)
			idFinale = idEdge1;
		else
			idFinale = idEdge2;

		if(idFinale == edges.size() - 1){
			edges.pop_back();
		}
		else {
		edges.erase(edges.begin() + idFinale);
		}
   }


   for(int i = 0; i < edges.size(); i++){
		edges[i].id = i;
   }

	if(idEdge1 == -1 && idEdge2 == -1){
		 ShowMessage("–ебро между этими вершинами не существует.");
   }
   else if(idEdge1 > -1){
		bool flag = false;
		for(int i = 0; i < graph[id1].size() - 1; i++){
			if(graph[id1][i].first == id2){
				graph[id1].erase(graph[id1].begin() + i);
				flag = true;
			}
		}
		if(!flag){
			graph[id1].pop_back();
		}

        for(int i = 0; i < graph.size(); i++){
			for(int j = 0; i < graph[i].size(); j++){
				if(graph[i][j].second == idEdge2 && idEdge1 < idEdge2)
					isChanged = true;
				if(graph[i][j].second > idEdge1){
					graph[i][j].second--;
				}
			}
		}
   }
   else if(idEdge2 > -1){
		if(isChanged)
			idEdge2--;

		bool flag = false;
		for(int i = 0; i < graph[id2].size() - 1; i++){
			if(graph[id2][i].first == id1){
				flag = true;
				graph[id2].erase(graph[id2].begin() + i);
			}
		}
		if(!flag){
			graph[id2].pop_back();
		}

		for(int i = 0; i < graph.size(); i++){
			for(int j = 0; i < graph[i].size(); j++){
				if(graph[i][j].second > idEdge2){
					graph[i][j].second--;
				}
				if(graph[i][j].second == idEdge1)
					idEdge1--;
			}
		}
   }
}

__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
isExisting1 = false;
isExisting2 = false;
}
void __fastcall TForm4::Button2Click(TObject *Sender)
{
	Form4->Close();
}
void __fastcall TForm4::FNameExit(TObject *Sender)
{
	AnsiString EditName = FName->Text;
	std::string tempName = EditName.c_str();
	isExisting1 = checkVertexExisting(tempName);
	if(isExisting1 && isExisting2){
		Button1->Enabled = true;
	}
	else if(!isExisting1){
	ShowMessage("¬ершина с таким именем не найдена");
	FName->SetFocus();
	}
}
void __fastcall TForm4::SNameExit(TObject *Sender)
{
	AnsiString EditName = SName->Text;
	std::string tempName = EditName.c_str();
	isExisting2 = checkVertexExisting(tempName);
	if(isExisting1 && isExisting2){
		Button1->Enabled = true;
	}
	else if(!isExisting2){
	ShowMessage("¬ершина с таким именем не найдена");
	SName->SetFocus();
	}
}
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	AnsiString tempName = FName->Text;
	std::string name = tempName.c_str();
	int id1 = findVertexByName(name);
	tempName = SName->Text;
	name = tempName.c_str();
	int id2 = findVertexByName(name);

	deleteEdges(id1, id2);
	ShowMessage("Succes");
	refreshGraph();
}
