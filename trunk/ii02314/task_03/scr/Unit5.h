#ifndef Unit5H
#define Unit5H
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.Classes.hpp>
class TForm5 : public TForm
{
__published:
	TLabel *NameOfFirstVertex;
	TLabel *NameOfSecondVertex;
	TEdit *Check1;
	TEdit *Check2;
	TButton *EditButton;
	void __fastcall Check1Exit(TObject *Sender);
	void __fastcall Check2Exit(TObject *Sender);
	void __fastcall EditButtonClick(TObject *Sender);
private:
public:
	__fastcall TForm5(TComponent* Owner);
};
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
