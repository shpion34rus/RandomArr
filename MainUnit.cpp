//---------------------------------------------------------------------------

#include <stdio.h>
#include <ctime>
#include <vector>
#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	std::srand(std::time(0));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	std::vector<int> dynArray;
	for (int i = 0; i < 10; i++)
	{
		dynArray.push_back(std::rand() % 11);
	}

	Label01->Caption =dynArray[0];
	Label02->Caption =dynArray[1];
	Label03->Caption =dynArray[2];
	Label04->Caption =dynArray[3];
	Label05->Caption =dynArray[4];
	Label06->Caption =dynArray[5];
	Label07->Caption =dynArray[6];
	Label08->Caption =dynArray[7];
	Label09->Caption =dynArray[8];
	Label10->Caption =dynArray[9];

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Label11->Caption = StrToInt(Label01->Caption);
	Label12->Caption = StrToInt(Label11->Caption) + StrToInt(Label02->Caption);
	Label13->Caption = StrToInt(Label12->Caption) + StrToInt(Label03->Caption);
	Label14->Caption = StrToInt(Label13->Caption) + StrToInt(Label04->Caption);
	Label15->Caption = StrToInt(Label14->Caption) + StrToInt(Label05->Caption);
	Label16->Caption = StrToInt(Label15->Caption) + StrToInt(Label06->Caption);
	Label17->Caption = StrToInt(Label16->Caption) + StrToInt(Label07->Caption);
	Label18->Caption = StrToInt(Label17->Caption) + StrToInt(Label08->Caption);
	Label19->Caption = StrToInt(Label18->Caption) + StrToInt(Label09->Caption);
	Label20->Caption = StrToInt(Label19->Caption) + StrToInt(Label10->Caption);
}
//---------------------------------------------------------------------------

