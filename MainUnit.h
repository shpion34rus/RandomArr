//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *Button1;
	TLabel *Label01;
	TLabel *Label02;
	TLabel *Label04;
	TLabel *Label03;
	TLabel *Label05;
	TLabel *Label06;
	TLabel *Label08;
	TLabel *Label07;
	TLabel *Label10;
	TLabel *Label09;
	TPanel *Panel2;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label14;
	TLabel *Label13;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label18;
	TLabel *Label17;
	TLabel *Label19;
	TLabel *Label20;
	TButton *Button2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
