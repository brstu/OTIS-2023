#ifndef Unit6H
#define Unit6H

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

class TForm6 : public TForm
{
public:
	__fastcall TForm6(TComponent* Owner);
__published:
	TLabel *Vertex_Red_Label2;
	TEdit *Vertex_Red_Edit2;
	TLabel *Vertex_Green_Label3;
	TEdit *Vertex_Green_Edit3;
	TLabel *Vertex_Blue_Label4;
	TEdit *Vertex_Blue_Edit4;
	TButton *OK_V_Button1;
	void __fastcall OK_V_Button1Click(TObject *Sender);
};

extern PACKAGE TForm6 *Form6;

#endif
