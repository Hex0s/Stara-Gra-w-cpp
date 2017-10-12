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
TForm4 *Form4;
extern int rekrut,rekrut2,hajs;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
Application->Terminate();        
}
//---------------------------------------------------------------------------
void __fastcall TForm4::batonClick(TObject *Sender)
{
 Form4->Visible=false;
 Form2->Visible=true;
 Form2->Top = Form4->Top;
 Form2->Left = Form4->Left;
}
//---------------------------------------------------------------------------



void __fastcall TForm4::FormActivate(TObject *Sender)
{
if (rekrut >= 1)
 {
 reku->Visible=true;
 ulepsz->Visible=true;
 }
  Haj->Caption=hajs;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ulepszClick(TObject *Sender)
{
 rekrut --;
 rekrut2 ++;
 if (rekrut >= 1)
 {
 reku->Visible=true;
 ulepsz->Visible=true;
 }
 else
 {
  reku->Visible=false;
 ulepsz->Visible=false;
 }

}
//---------------------------------------------------------------------------

