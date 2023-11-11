//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit2;
	TButton *Button1;
	TLabel *Label3;
	TEdit *Edit3;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
