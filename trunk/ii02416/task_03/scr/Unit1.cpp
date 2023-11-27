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
#include<vector>
#include<string>
#include<cmath>
#include <algorithm>
#include <fstream>
#include <sstream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PaintBox1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	PaintBox1->Canvas->Pen->Width = 2;
	PaintBox1->Canvas->Pen->Color = clBlack;
	if(!status)
	{
		if(Button == mbLeft)
		{
			for(int i=0;i<vertices.size();i++)
			{
				int a=(int)sqrt(pow((vertices[i].X-X),2)+pow((vertices[i].Y-Y),2));
				if((a<=R*3))
				{
					return;
				}
			}
			draw_ver(X,Y,vertices.size()+1,clWhite);
			vertex buff;
			buff.X = X;
			buff.Y = Y;
			buff.Color = clWhite;
			buff.NAME="";
			vertices.push_back(buff);
			graph.push_back({});
		}
		else
		if(Button == mbRight)
		{
			PaintBox1->Canvas->MoveTo(X,Y);
			for(int i=0;i<edges.size();i++)
			{
				int a=(int)sqrt(pow((edges[i].X1-X),2)+pow((edges[i].Y1-Y),2));
				int b=(int)sqrt(pow((edges[i].X2-X),2)+pow((edges[i].Y2-Y),2));
				if(a<=R+5 || b<=R+5)
				{
					edges.erase(edges.begin()+i);
					i=0;
				}
			}


			for(int i=0;i<vertices.size();i++)
			{
				int a=(int)sqrt(pow((vertices[i].X-X),2)+pow((vertices[i].Y-Y),2));
				if(a<=R)
				{

					for(int j=0;j<graph.size();j++)
					{
						for(int k=0;k<graph[j].size();k++)
						{
							if(graph[j][k].second==i)
							{
								graph[j].erase(graph[j].begin()+k);
								k=0;
							}
						}
					}
					vertices.erase(vertices.begin()+i);
					graph.erase(graph.begin()+i);
					break;
				}
			}

			PaintBox1->Repaint();
			for(int i=0;i<edges.size();i++)
				draw_edge(edges[i].X1,edges[i].Y1,edges[i].X2,edges[i].Y2,edges[i].weight,edges[i].Color);
			for(int i=0;i<vertices.size();i++)
				draw_ver(vertices[i].X,vertices[i].Y,i+1,vertices[i].Color);
		}
	}
	else
	switch(status)
	{
		case 1:
		{
			Form2->Show();
			M_X=X;
			M_Y=Y;
			status = 0;
			break;
		}
		case 2:
		{

			for(int i=0;i<edges.size();i++)
			{
				int dist = abs((edges[i].Y2 - edges[i].Y1) * X - (edges[i].X2 - edges[i].X1) * Y + edges[i].X2 * edges[i].Y1 - edges[i].X1 * edges[i].Y2) / sqrt(pow((edges[i].Y2 - edges[i].Y1),2) + pow((edges[i].X2 - edges[i].X1),2));
				if(dist<=R+5)
				{
					for(int j=0;j<graph.size();j++)
					{
						for(int k=0;k<graph[j].size();k++)
						{
							if(graph[j][k].second==i)
							{
								graph[j].erase(graph[j].begin()+k);
								k=0;
							}
						}
					}
					edges.erase(edges.begin()+i);
					break;
				}
			}

			PaintBox1->Repaint();

			for(int i=0;i<edges.size();i++)
				draw_edge(edges[i].X1,edges[i].Y1,edges[i].X2,edges[i].Y2,edges[i].weight, edges[i].Color);

			for(int i=0;i<vertices.size();i++)
				draw_ver(vertices[i].X,vertices[i].Y,i+1,vertices[i].Color);

			status = 0;
			break;
		}
		case 3:
		{
			Form6->Show();
			M_X=X;
			M_Y=Y;
			status = 0;
			break;
		}
		case 4:
		{
			Form5->Show();
			M_X=X;
			M_Y=Y;
			status = 0;
			break;
		}
		default:
		{
			PaintBox1->Canvas->MoveTo(X,Y);
			break;
		}
	}

}

//---------------------------------------------------------------------------

void __fastcall TForm1::AddEdgeClick(TObject *Sender)
{
	status = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteEdgeClick(TObject *Sender)
{
	status = 2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditVertexClick(TObject *Sender)
{
	status = 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EditEdgeClick(TObject *Sender)
{
	status = 4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InfoGraphClick(TObject *Sender)
{
	Form4->CountVertex_Edit1->Text = vertices.size();
	Form4->CountEdge_Edit2->Text = edges.size();
	Form4->StringGrid1->RowCount = vertices.size() + 1;
	Form4->StringGrid1->ColCount = vertices.size() + 1;
	Form4->StringGrid1->FixedCols = 1;
	Form4->StringGrid1->FixedRows = 1;

	Form4->StringGrid2->RowCount = vertices.size()+1;
	Form4->StringGrid2->ColCount = 2;

	for (int i = 0; i <= vertices.size(); i++) {
		Form4->StringGrid1->Cells[0][i] = "V" + IntToStr(i);
		Form4->StringGrid1->Cells[i][0] = "V" + IntToStr(i);
	}

	for (int i = 1; i <= graph.size(); i++) {
		for (int j = 1; j <= graph.size(); j++) {
			Form4->StringGrid1->Cells[i][j] = 0;
		}
	}

	for (int i = 0; i < graph.size(); i++) {
		for (int j = 0; j < graph[i].size(); j++) {
			Form4->StringGrid1->Cells[i+1][graph[i][j].second+1] = 1;
		}
	}

	int colWidth = Form4->StringGrid1->ClientWidth / Form4->StringGrid1->ColCount;
	for (int col = 0; col < Form4->StringGrid1->ColCount; col++) {
		Form4->StringGrid1->ColWidths[col] = colWidth;
	}

	int rowHeight = Form4->StringGrid1->ClientHeight / Form4->StringGrid1->RowCount;
	for (int row = 0; row < Form4->StringGrid1->RowCount; row++) {
		Form4->StringGrid1->RowHeights[row] = rowHeight;
	}

	int colCount2 = 0;

	for (const auto& row : graph)
    {
		for (const auto& entry : row)
        {
			if (entry.second + 1 > colCount2)
			{
				colCount2 = entry.second + 1;
            }
		}
	}


	Form4->StringGrid3->RowCount = vertices.size() + 1;
	Form4->StringGrid3->ColCount = edges.size() + 1;

	Form4->StringGrid3->Cells[0][0] = "V";
	for (int i = 0; i < edges.size(); i++) {
		Form4->StringGrid3->Cells[i + 1][0] = "E" + IntToStr(i+1);
	}
	std::vector<std::vector<int>> incidenceMatrix(vertices.size(), std::vector<int>(edges.size(), 0));
	for (int i = 0; i < edges.size(); i++) {
		const edge& e = edges[i];
		int startVertex = -1;
		int endVertex = -1;
		for (int j = 0; j < vertices.size(); j++) {
			const vertex& v = vertices[j];
			if (v.X == e.X1 && v.Y == e.Y1) {
				startVertex = j;
			} else if (v.X == e.X2 && v.Y == e.Y2) {
				endVertex = j;
			}
		}
		if (startVertex != -1 && endVertex != -1) {
			incidenceMatrix[startVertex][i] = 1;
			incidenceMatrix[endVertex][i] = 1;
		}
	}

	for (int i = 0; i < vertices.size(); i++) {
		Form4->StringGrid3->Cells[0][i + 1] = "V" +  IntToStr(i+1);
		for (int j = 0; j < edges.size(); j++) {
			Form4->StringGrid3->Cells[j + 1][i + 1] =  IntToStr(incidenceMatrix[i][j]);
		}
	}


	bool tree=true;
	bool full=true;
	bool eiler=true;

	if((int)(vertices.size()*(vertices.size()-1)/2)!=edges.size())
		full=false;

	Form4->StringGrid2->Cells[0][0] = "Vn";
	Form4->StringGrid2->Cells[1][0] = "Ст-нь";
	for (int i = 1; i <=graph.size(); i++) {
	   Form4->StringGrid2->Cells[0][i] = "V" + IntToStr(i);
	   if(graph[i-1].size()>2)
			tree=false;
	   if(graph[i-1].size()%2!=0)
			eiler=false;
	   Form4->StringGrid2->Cells[1][i] = IntToStr((int)graph[i-1].size());
	}

	int compp = comp();
	if(compp==1)
		Form4->Comp_Edit5->Text = 1;
	else
		Form4->Comp_Edit5->Text = 0;

	if(compp==1 && eiler)
		Form4->Eiler_Edit6->Text=1;
	else
		Form4->Eiler_Edit6->Text=0;
	if(tree && compp==1)
		Form4->Tree_Edit3->Text = 1;
	else
		Form4->Tree_Edit3->Text = 0;
	Form4->Full_Edit4->Text = full;
	Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DistanceClick(TObject *Sender)
{
   Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ImportClick(TObject *Sender)
{
	if (OpenTextFileDialog1->Execute())
	{
		std::wstring wideFilename = std::wstring(OpenTextFileDialog1->FileName.w_str());
		std::string filename(wideFilename.begin(), wideFilename.end());
		std::ifstream file(filename);

		vertices.clear();
		edges.clear();
		graph.clear();

        std::string line;
        std::getline(file, line);
		std::istringstream vertexStream(line);
		std::string vertexData;
		while (std::getline(vertexStream, vertexData, ',')) {
            vertex v;
            v.X = std::stoi(vertexData);
			std::getline(vertexStream, vertexData, ',');
			v.Y = std::stoi(vertexData);
			std::getline(vertexStream, vertexData, ',');
			TColor vertexColor = TColor(RGB(Color >> 16 & 0xFF, Color >> 8 & 0xFF, Color & 0xFF));
            vertices.push_back(v);
		}

        std::getline(file, line);
        std::istringstream edgeStream(line);
		std::string edgeData;
        while (std::getline(edgeStream, edgeData, ',')) {
            edge e;
            e.X1 = std::stoi(edgeData);
			std::getline(edgeStream, edgeData, ',');
            e.Y1 = std::stoi(edgeData);
            std::getline(edgeStream, edgeData, ',');
            e.X2 = std::stoi(edgeData);
            std::getline(edgeStream, edgeData, ',');
			e.Y2 = std::stoi(edgeData);
			std::getline(edgeStream, edgeData, ',');
            e.weight = std::stoi(edgeData);
			std::getline(edgeStream, edgeData, ',');
			TColor edgeColor = TColor(RGB(Color >> 16 & 0xFF, Color >> 8 & 0xFF, Color & 0xFF));
			edges.push_back(e);
		}
		std::getline(file, line);
        while (std::getline(file, line)) {
            std::vector<std::pair<int, int>> adjacentVertices;
            std::istringstream adjacencyList(line);
            std::string adjacencyData;
			while (std::getline(adjacencyList, adjacencyData, ',')) {
				int vertexIndex = std::stoi(adjacencyData);
                std::getline(adjacencyList, adjacencyData, ',');
				int edgeIndex = std::stoi(adjacencyData);
                adjacentVertices.push_back(std::make_pair(vertexIndex, edgeIndex));
			}
            graph.push_back(adjacentVertices);
        }
        file.close();
        PaintBox1->Repaint();
        for (int i = 0; i < edges.size(); i++)
			draw_edge(edges[i].X1, edges[i].Y1, edges[i].X2, edges[i].Y2, edges[i].weight, edges[i].Color);
		for (int i = 0; i < vertices.size(); i++)
			draw_ver(vertices[i].X, vertices[i].Y, i + 1, vertices[i].Color);
	}
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ExportClick(TObject *Sender)
{
	if (SaveTextFileDialog1->Execute())
	{
		std::wstring wideFilename = std::wstring(SaveTextFileDialog1->FileName.w_str());
		std::string filename(wideFilename.begin(), wideFilename.end());
		std::ofstream file(filename);
		for (vertex& v : vertices) {
			file << v.X << "," << v.Y  << "," << v.Color << "," << std::endl;
		}
        file << std::endl;

        for (edge& e : edges) {
			file << e.X1 << "," << e.Y1 << "," << e.X2 << "," << e.Y2 << "," << e.weight << "," << e.Color << "," << std::endl;;
		}
		file << std::endl;

		for (std::vector<std::pair<int, int>>& adjacencyList : graph) {
			for (std::pair<int, int>& adjacency : adjacencyList) {
				file << adjacency.first << "," << adjacency.second << ",";
            }
            file << std::endl;
        }

        file.close();
	}
}
