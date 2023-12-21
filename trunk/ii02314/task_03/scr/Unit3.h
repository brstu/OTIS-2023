#ifndef Unit3H
#define Unit3H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
int findVertexByName(std::string name);
int findEdgeByIDS(int id1, int id2);
bool checkVertexExisting(std::string name);
class TForm3 : public TForm
{
__published:
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
	TButton *AddButton;
	TButton *ExitButton;
	void __fastcall FirstNameExit(TObject *Sender);
	void __fastcall SecondNameExit(TObject *Sender);
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall ExitButtonClick(TObject *Sender);
public:
	__fastcall TForm3(TComponent* Owner);
private:
};
extern PACKAGE TForm3 *Form3;
#endif
