//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
extern int hajs,rep;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::batonClick(TObject *Sender)
{
  Form3->Visible=false;
 Form2->Visible=true;
 Form2->Top = Form3->Top;
 Form2->Left = Form3->Left;
}
//---------------------------------------------------------------------------






void __fastcall TForm3::ImenClick(TObject *Sender)
{
hajs += 1000;

}
//---------------------------------------------------------------------------

void __fastcall TForm3::btuClick(TObject *Sender)
{
hajs += 100;
rep--;
btu->Visible = false;
batonik->Visible = false;
Ramka->Visible = false;
Wramce->Visible = false;
T->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::btuMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
batonik->Visible=true;
btu->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ImMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
btu->Visible=true;
batonik->Visible=false;
Ramka->Visible=false;
Wramce->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::batonikMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Ramka->Visible=true;
Wramce->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TTimer(TObject *Sender)
{
btu->Visible = true;
batonik->Visible = true;
Ramka->Visible = true;
Wramce->Visible = true;
T->Enabled=false;
}
//---------------------------------------------------------------------------

