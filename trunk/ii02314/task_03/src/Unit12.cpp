//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
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
#include <vector>
#include <sstream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;

int findSmalest(std::vector <int> dist, std::vector <bool> isVisited) {
        int min = 999999;
        int res = 0;
        for(int i = 0; i < dist.size();i++){
            if (dist[i] < min && !isVisited[i]) {
                min = dist[i];
                res = i;
            }
        }
        return res;
	}
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Edit1Exit(TObject *Sender)
{
	/*AnsiString EditName = Edit1->Text;
	std::string tempName = EditName.c_str();
	//isExisting1 = checkVertexExisting(tempName);
	if(checkVertexExisting(tempName)){
		Button1->Enabled = true;
	}
	else{
	ShowMessage("Вершина с таким именем не найдена");
	Edit1->SetFocus();
	}
	*/
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Edit2Exit(TObject *Sender)
{
/*
    AnsiString EditName = Edit2->Text;
	std::string tempName = EditName.c_str();
	//isExisting2 = checkVertexExisting(tempName);
	if(checkVertexExisting(tempName)){
		Button1->Enabled = true;
	}
	else{
	ShowMessage("Вершина с таким именем не найдена");
	Edit2->SetFocus();
	}
	*/
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Button1Click(TObject *Sender)
{
		Memo1->Clear();
		int numOfVertex = vertexes.size();
		std::vector<std::vector<int>> matrix = adjMatrix;
		std::stringstream fout;
		std::vector <int> distance(numOfVertex, 10000);
		std::vector <bool> isVisited(numOfVertex, false);
		std::vector <int> prev(numOfVertex, -1);

		distance[0] = 0;
		isVisited[0] = true;
		prev[0] = 0;

		for (int i = 0; i < numOfVertex; i++)
			if (adjMatrix[0][i] <= distance[i]) {
				distance[i] = matrix[0][i];
				prev[i] = 0;
			}

		for (int i = 0; i < numOfVertex - 1; i++) {
			int minInd = findSmalest(distance, isVisited);
			int minDist = distance[minInd];
			isVisited[minInd] = true;

			for (int i = 0; i < numOfVertex; i++) {
				if (!isVisited[i] &&  distance[i] > matrix[minInd][i] + minDist) {
					distance[i] = matrix[minInd][i] + minDist;
                    prev[i] = minInd;
				}
			}
        }

		fout << "Vertex\tDist\tPrev" << "\n";
			Memo1->Lines->Add(fout.str().c_str());
		fout.str("");
		fout.clear();
		for (int i = 0; i < numOfVertex; i++) {
			fout << vertexes[i].name << "\t" << distance[i] << "\t" << prev[i] + 1 << "\n";
			Memo1->Lines->Add(fout.str().c_str());
			fout.str("");
            fout.clear();
		}
}
//---------------------------------------------------------------------------
