//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

//int check;
int findVertexByName(std::string name);
int findEdgeByIDS(int id1, int id2);
bool checkVertexExisting(std::string name);
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;

	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TCheckBox *CheckBox1;
	TButton *Button1;
	TButton *Button2;
	void __fastcall Edit1Exit(TObject *Sender);
	void __fastcall Edit2Exit(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
