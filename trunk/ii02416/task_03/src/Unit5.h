//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
