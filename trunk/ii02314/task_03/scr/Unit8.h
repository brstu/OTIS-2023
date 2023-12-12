//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
#include <Vcl.StdCtrls.hpp>
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------


//int Form7id;
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm8(TComponent* Owner); // User declarations
	void __fastcall passID(int x1);    // User declarations
};
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------



#endif
