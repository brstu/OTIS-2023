#ifndef Unit5H
#define Unit5H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
 
class TForm5 : public TForm
{
__published:	
	TLabel *Weight_E;
	TEdit *Weight_E_Edit1;
	TLabel *Red_E_Label2;
	TLabel *Green_E_Label3;
	TLabel *Blue_E_Label4;
	TEdit *Red_E_Edit2;
	TEdit *Green_E_Edit3;
	TEdit *Blue_E_Edit4;
	TButton *OK_E;
	void __fastcall OK_EClick(TObject *Sender);
//private:	
public:		
	__fastcall TForm5(TComponent* Owner);
};
 
extern PACKAGE TForm5 *Form5;
 
#endif
