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
TForm6 *Form6;
int rekrut,rekrut2;
extern int rep,hajs;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm6::batonClick(TObject *Sender)
{
 Form6->Visible=false;
 Form2->Visible=true;
 Form2->Top = Form6->Top;
 Form2->Left = Form6->Left;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormActivate(TObject *Sender)
{
Haj->Caption = hajs;
if (rep <= 1 || hajs <= 100)
{
rek->Visible = false;

}
if (rep >= 2 && hajs >= 100)
{
rek->Visible = true;

}
}
//---------------------------------------------------------------------------




void __fastcall TForm6::RekzClick(TObject *Sender)
{
 rekrut ++;
 rek->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::rekClick(TObject *Sender)
{
 hajs -= 100 ;
 Haj->Caption = hajs;
 rek->Visible=false;
 rekrut++;
 if(hajs >= 100) zeg->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm6::zegTimer(TObject *Sender)
{
   rek->Visible=true;
   zeg->Enabled=false;

}
//---------------------------------------------------------------------------



void __fastcall TForm6::rekMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
 NN->Visible=true;
 LL->Visible=true;
 LL->Caption="Cena = 100";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::tloMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
  NN->Visible=false;
 LL->Visible=false;
}
//---------------------------------------------------------------------------

