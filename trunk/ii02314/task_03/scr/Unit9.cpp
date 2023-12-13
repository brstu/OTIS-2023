//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
    AnsiString EditName = Edit1->Text;
	std::string stringName = EditName.c_str();
	if(checkVertexExisting(stringName)){
	//ShowMessage("Found");
		AnsiString tempName = Edit1->Text;
		std::string name = tempName.c_str();
		int id1 = findVertexByName(name);

		for(int i = 0; i < graph[id1].size(); i++){
			deleteEdges(id1, graph[id1][i].first);
		}

		if(id1 == graph.size() - 1){
			vertexes.pop_back();
			graph.pop_back();
		}
		else{
			graph.erase(graph.begin() + id1);
			vertexes.erase(vertexes.begin() + id1);
			for(int i = 0; i < graph.size(); i++){
				vertexes[i].id = i;
				for(int j = 0; j < graph[i].size(); j++){
					if(graph[i][j].first > id1)
                        graph[i][j].first--;
				}
			}
		}
		//ShowMessage("done");
		refreshGraph();
        Form9->Close();
	}
	else {
	Edit1->SetFocus();
	ShowMessage("Вершина с таким именем не найдена");
	}
}
//---------------------------------------------------------------------------
