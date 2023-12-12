object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 196
  ClientWidth = 210
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 24
    Top = 24
    Width = 57
    Height = 15
    Caption = 'First Vertex'
  end
  object Label2: TLabel
    Left = 24
    Top = 59
    Width = 74
    Height = 15
    Caption = 'Second Vertex'
  end
  object Edit1: TEdit
    Left = 104
    Top = 21
    Width = 89
    Height = 23
    TabOrder = 0
    OnExit = Edit1Exit
  end
  object Edit2: TEdit
    Left = 104
    Top = 56
    Width = 89
    Height = 23
    TabOrder = 1
    OnExit = Edit2Exit
  end
  object Button1: TButton
    Left = 64
    Top = 104
    Width = 75
    Height = 25
    Caption = 'Delete'
    Enabled = False
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 64
    Top = 152
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 3
    OnClick = Button2Click
  end
end
