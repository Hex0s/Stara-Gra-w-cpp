//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit5.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int zap,hajs,rep = 3;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::B1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{

 B1->Visible=false;
 B2->Visible=true;
 zap==+1;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ziemiaMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
 zap=0;
 B2->Visible=false;
 B1->Visible=true;
 l2->Visible=false;
 l1->Visible=true;
  r2->Visible=false;
 r1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
 Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::B2Click(TObject *Sender)
{
 Form2->Visible = false;
 Form3->Visible = true;
 Form3->Top = Form2->Top;
 Form3->Left = Form2->Left;
}
//---------------------------------------------------------------------------



void __fastcall TForm2::l1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
 if(zap==0)
 {
  l1->Visible=false;
 l2->Visible=true;
 zap==+1;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::l2Click(TObject *Sender)
{
 Form2->Visible = false;
 Form4->Visible = true;
 Form4->Top = Form2->Top;
 Form4->Left = Form2->Left;


}
//---------------------------------------------------------------------------

void __fastcall TForm2::r2Click(TObject *Sender)
{
 Form2->Visible = false;
 Form6->Visible = true;
 Form6->Top = Form2->Top;
 Form6->Left = Form2->Left;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::r1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{

 if(zap==0)
 {
  r1->Visible=false;
 r2->Visible=true;
 zap==+1;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::batonClick(TObject *Sender)
{
 Form2->Visible=false;
 Form1->Visible=true;
 Form1->Top = Form2->Top;
 Form1->Left = Form2->Left;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Baton2Click(TObject *Sender)
{
  Form2->Visible=false;
 Form5->Visible=true;
 Form5->Top = Form2->Top;
 Form5->Left = Form2->Left;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
 Haj->Caption=hajs;

 WPR->Caption=rep;

 if(rep == 3)
 {
  PR3->Visible=true;
 }
   else
 {
  PR3->Visible=false;
 }





  if(rep >= 4)
 {
  PR4->Visible=true;
 }
  else
 {
  PR4->Visible=false;
 }


  if(rep <= 0)
 {
  PR->Visible=true;
 }




  if(rep == 1)
 {
  PR1->Visible=true;
 }
  else
 {
  PR1->Visible=false;
 }


  if(rep == 2)
 {
  PR2->Visible=true;
 }
 else
 {
  PR2->Visible=false;
 }


}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
rep--;        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
rep++;
}
//---------------------------------------------------------------------------





