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
#include <vector>
#include <sstream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{
	std::vector<std::vector<int>> matrix(vertexes.size(), std::vector<int>(edges.size(), 0));
	Memo1->Clear();

	for(int i = 0; i < graph.size(); i++){
		for(int j = 0; j < graph[i]. size();j++){
			int from = i;
			int to = graph[i][j].first;
			int id = graph[i][j].second;
			if(matrix[from][id] == 0)
			matrix[from][id] = -1;
			else
			matrix[from][id] = 1;

			matrix[to][id] = 1;
		}
	}


    for (int i = 0; i < vertexes.size(); ++i) {
		std::stringstream fout;
		for (int j = 0; j < edges.size(); ++j)
			fout << matrix[i][j] << " \t";
		Memo1->Lines->Add(fout.str().c_str());
	}
}
//---------------------------------------------------------------------------
