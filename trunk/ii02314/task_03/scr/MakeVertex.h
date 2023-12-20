

#ifndef MakeVertexH
#define MakeVertexH
//---------------------------------------------------------------------------
#include <System.Classes.hpp> #include <Vcl.Controls.hpp> #include <Vcl.StdCtrls.hpp> #include <Vcl.Forms.hpp>

void roundRGB(int& x);
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Name;
	TEdit *NameColumn;
	TLabel *RGB;
	TEdit *RValue;
	TEdit *GValue;
	TEdit *BValue;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall NameColumnExit(TObject *Sender);
private:
public:
	__fastcall TForm2(TComponent* Owner);
};
extern PACKAGE TForm2 *Form2;
#endif
