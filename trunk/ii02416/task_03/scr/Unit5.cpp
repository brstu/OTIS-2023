//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vector>
#include "Unit5.h"
#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::OK_EClick(TObject *Sender)
{
	int red = StrToInt(Form5->Red_E_Edit2->Text);
	int green = StrToInt(Form5->Green_E_Edit3->Text);
	int blue = StrToInt(Form5->Blue_E_Edit4->Text);
	int index, index_a, index_b;
	vertex a,b;
	for(int i=0;i<edges.size();i++)
	{
		int dist = abs((edges[i].Y2 - edges[i].Y1) * M_X - (edges[i].X2 - edges[i].X1) * M_Y + edges[i].X2 * edges[i].Y1 - edges[i].X1 * edges[i].Y2) / sqrt(pow((edges[i].Y2 - edges[i].Y1),2) + pow((edges[i].X2 - edges[i].X1),2));
		if(dist<=R+5)
		{
			a.X = edges[i].X1;
			a.Y = edges[i].Y1;
			b.X = edges[i].X2;
			b.Y = edges[i].Y2;
			index = i;
			break;
		}
	}

	for(int i=0;i<vertices.size();i++)
	{
		if(a.X == vertices[i].X && a.Y == vertices[i].Y)
			{index_a = i;break;}
	}
	for(int i=0;i<vertices.size();i++)
	{
		if(b.X == vertices[i].X && b.Y == vertices[i].Y)
			{index_b = i;break;}
	}
	graph[index_a][index_b].first = StrToInt(Form5->Weight_E_Edit1->Text);
	graph[index_b][index_a].first = StrToInt(Form5->Weight_E_Edit1->Text);
	Form1->PaintBox1->Repaint();

   for(int i=0;i<edges.size();i++)
   {
		if(index==i)
		{
			edges[i].Color = TColor(RGB(red,green,blue));
			edges[i].weight = StrToInt(Form5->Weight_E_Edit1->Text);
		}
		draw_edge(edges[i].X1,edges[i].Y1,edges[i].X2,edges[i].Y2,edges[i].weight, edges[i].Color);
   }

	for(int i=0;i<vertices.size();i++)
		draw_ver(vertices[i].X,vertices[i].Y,i+1, vertices[i].Color);
	Weight_E_Edit1->Text = "0";
	Red_E_Edit2->Text = "0";
	Green_E_Edit3->Text = "0";
	Blue_E_Edit4->Text = "0";
	Hide();
}
//---------------------------------------------------------------------------
