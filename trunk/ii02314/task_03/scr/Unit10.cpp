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
#include <vector>
#include <sstream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm10 *Form10;
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
	Place->Clear();

	std::vector<std::vector<int>> matrix(vertexes.size(), std::vector<int>(vertexes.size(), 0));

	for(int i = 0; i < graph.size(); i++){
		for(int j = 0; j < graph[i]. size();j++){
			matrix[i][graph[i][j].first] = edges[graph[i][j].second].weight;
		}
	}

	for (int i = 0; i < matrix.size(); ++i) {
		std::stringstream ss;
		for (int j = 0; j < matrix.size(); ++j) {
			ss << matrix[i][j] << "\t";
		}
		Place->Lines->Add(ss.str().c_str());
	}

	adjMatrix = matrix;
}
//---------------------------------------------------------------------------
