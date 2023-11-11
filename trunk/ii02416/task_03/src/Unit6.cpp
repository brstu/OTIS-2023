//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <vector>
#include "Unit6.h"
#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	int red = StrToInt(Form6->Edit2->Text);
	int green = StrToInt(Form6->Edit3->Text);
	int blue = StrToInt(Form6->Edit4->Text);
	int index;

	for(int i=0;i<vertices.size();i++)
	{
		int a=(int)sqrt(pow((vertices[i].X-M_X),2)+pow((vertices[i].Y-M_Y),2));
		if((a<=R*3))
		{
			index = i;
			break;
		}
	}

	Form1->PaintBox1->Repaint();

   for(int i=0;i<edges.size();i++)
		draw_edge(edges[i].X1,edges[i].Y1,edges[i].X2,edges[i].Y2,edges[i].weight, edges[i].Color);

	for(int i=0;i<vertices.size();i++)
	{
		if(index==i)
		{
			vertices[i].Color = TColor(RGB(red,green,blue));
		}
		draw_ver(vertices[i].X,vertices[i].Y,i+1, vertices[i].Color);
	}
	Edit2->Text = "0";
	Edit3->Text = "0";
	Edit4->Text = "0";
	Hide();
}
