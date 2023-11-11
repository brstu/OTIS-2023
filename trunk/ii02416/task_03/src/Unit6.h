//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label2;
	TEdit *Edit2;
	TLabel *Label3;
	TEdit *Edit3;
	TLabel *Label4;
	TEdit *Edit4;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
