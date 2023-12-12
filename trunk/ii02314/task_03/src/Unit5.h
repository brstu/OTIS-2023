//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>

//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:
	TLabel *Label1;

	TLabel *Label2;

	TEdit *Edit1;

	TEdit *Edit2;

	TButton *Button1;
	void __fastcall Edit1Exit(TObject *Sender);
	void __fastcall Edit2Exit(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:
public:
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
