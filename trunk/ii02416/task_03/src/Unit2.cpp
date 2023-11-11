//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit3.h"
#include "Unit2.h"
#include <vector>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	Constraints->MaxHeight = 160;
	Constraints->MinHeight = 160;
	Constraints->MaxWidth = 170;
	Constraints->MinWidth = 170;
}
//--------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	int index1;
	edge buff;
	for(int i=0;i<vertices.size();i++)
	{
		int a=(int)sqrt(pow((vertices[i].X-M_X),2)+pow((vertices[i].Y-M_Y),2));
		if(a<=R)
		{
			buff.X1 = vertices[i].X;
			buff.Y1 = vertices[i].Y;
			index1 = i;
			break;
		}
	}
	int index2 = StrToInt(Form2->Edit1->Text);
	if (index2>vertices.size() || index2-1==index1)
		return;
	buff.X2 = vertices[index2-1].X;
	buff.Y2 = vertices[index2-1].Y;
	if(Form2->Edit2->Text=="")
		buff.weight = 0;
	else
		buff.weight = StrToInt(Form2->Edit2->Text);
	buff.Color = clBlack;
	edges.push_back(buff);

	graph[index1].push_back({buff.weight,index2-1});
	graph[index2-1].push_back({buff.weight,index1});

	draw_edge(buff.X1,buff.Y1,buff.X2,buff.Y2,buff.weight,buff.Color);
	draw_ver(buff.X1,buff.Y1,index1+1,vertices[index1].Color);
	draw_ver(buff.X2,buff.Y2,index2,vertices[index2-1].Color);
	Edit1->Text = "";
	Edit2->Text = "";
	Hide();
}
//---------------------------------------------------------------------------

