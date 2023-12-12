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
	TLabel *Name1;
	TLabel *Name2;
	TLabel *Weight;
	TLabel *Color;
	TEdit *FirstName;
	TEdit *SecondName;
	TEdit *EditWeight;

	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TCheckBox *CheckBox1;
	TButton *Button1;
	TButton *ExitButton;
	void __fastcall FirstNameExit(TObject *Sender);
	void __fastcall SecondNameExit(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ExitButtonClick(TObject *Sender);
private:
public:
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
//90999
//1
//2
//3//4//5//6
#endif
