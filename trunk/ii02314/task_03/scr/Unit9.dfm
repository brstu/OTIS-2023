object Form9: TForm9
  Left = 0
  Top = 0
  Caption = 'Form9'
  ClientHeight = 136
  ClientWidth = 209
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 8
    Top = 24
    Width = 32
    Height = 15
    Caption = 'Name'
  end
  object Edit1: TEdit
    Left = 57
    Top = 21
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object Button1: TButton
    Left = 57
    Top = 80
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Delete'
    TabOrder = 1
    OnClick = Button1Click
  end
end
