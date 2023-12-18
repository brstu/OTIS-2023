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
#include "Unit13.h"
#include <vector>
#include <sstream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

 bool checkForOdd() {
		int counter = 0;
		int numOfVertex = vertexes.size();
        for (int i = 0; i < numOfVertex; i++) {
            for (int j = 0; j < numOfVertex; j++) {
				if (adjMatrix[i][j] == 1)
					counter++;
            }
            if (counter % 2 == 1)
                return false;
        }
        return true;
 }

TForm13 *Form13;
//---------------------------------------------------------------------------
__fastcall TForm13::TForm13(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm13::showButtonClick(TObject *Sender)
{
		 informationMemo->Clear();
		std::stringstream fout;
		fout << "Number of vertexes: " << vertexes.size() << "\n";
		informationMemo->Lines->Add(fout.str().c_str());
		fout.str("");
		fout.clear();
		fout << "Number of edges: " << edges.size() << "\n";
		informationMemo->Lines->Add(fout.str().c_str());
		fout.str("");
		fout.clear();
		for(int i = 0; i < graph.size(); i++){
			fout << "Degree of  " << vertexes[i].name << "\t : " << graph[i].size()<<"\n";
			informationMemo->Lines->Add(fout.str().c_str());
			fout.str("");
			fout.clear();
		}
		if(checkForOdd()){
			fout << "Eyler cycle: exist\n";
		} else fout << "Eyler cycle: don't exist\n";
        informationMemo->Lines->Add(fout.str().c_str());
			fout.str("");
			fout.clear();
}
//---------------------------------------------------------------------------
