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
	TLabel *CountVertex;
	TLabel *CountEdge;
	TEdit *CountVertex_Edit1;
	TEdit *CountEdge_Edit2;
	TLabel *StepenVertex;
	TStringGrid *StringGrid1;
	TStringGrid *StringGrid2;
	TLabel *Full;
	TLabel *Tree;
	TLabel *Comp;
	TLabel *Eiler;
	TEdit *Tree_Edit3;
	TEdit *Full_Edit4;
	TEdit *Comp_Edit5;
	TEdit *Eiler_Edit6;
	TStringGrid *StringGrid3;
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
