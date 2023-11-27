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
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
__published:	// IDE-managed Components
	TEdit *Distance_From_Edit1;
	TLabel *Distance_From_Label1;
	TLabel *Distance_To_Label2;
	TEdit *Distance_To_Edit2;
	TButton *OK_D_Button1;
	TLabel *Ans_Label3;
	TEdit *Ans_Edit3;
	void __fastcall OK_D_Button1Click(TObject *Sender);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
