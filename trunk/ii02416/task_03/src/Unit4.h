//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label3;
	TStringGrid *StringGrid1;
	TStringGrid *StringGrid2;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TStringGrid *StringGrid3;
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
