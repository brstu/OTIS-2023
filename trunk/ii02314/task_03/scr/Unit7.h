#ifndef Unit7H
#define Unit7H
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TLabel *EditLabelVertex;  // IDE-managed Components
	TEdit *Edit1;
	TButton *EditVertexBut;   // IDE-managed Components
	void __fastcall EditVertexButClick(TObject *Sender);

public:
	__fastcall TForm7(TComponent* Owner);
    private:	// User declarations
};
extern PACKAGE TForm7 *Form7;
#endif
