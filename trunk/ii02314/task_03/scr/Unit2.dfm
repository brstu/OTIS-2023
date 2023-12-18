object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'MakeVertex'
  ClientHeight = 191
  ClientWidth = 195
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  TextHeight = 15
  object Name: TLabel
    Left = 8
    Top = 24
    Width = 32
    Height = 15
    Caption = 'Name'
  end
  object RGB: TLabel
    Left = 8
    Top = 64
    Width = 22
    Height = 15
    Caption = 'RGB'
  end
  object NameColumn: TEdit
    Left = 57
    Top = 21
    Width = 121
    Height = 23
    TabOrder = 0
    OnExit = NameColumnExit
  end
  object RValue: TEdit
    Left = 57
    Top = 61
    Width = 121
    Height = 23
    NumbersOnly = True
    TabOrder = 1
    Text = '255'
  end
  object GValue: TEdit
    Left = 57
    Top = 90
    Width = 121
    Height = 23
    ImeName = 'Russian'
    NumbersOnly = True
    TabOrder = 2
    Text = '255'
  end
  object BValue: TEdit
    Left = 57
    Top = 119
    Width = 121
    Height = 23
    ImeName = 'Russian'
    NumbersOnly = True
    TabOrder = 3
    Text = '255'
  end
  object Button1: TButton
    Left = 57
    Top = 150
    Width = 75
    Height = 25
    Caption = 'OK'
    DisabledImageName = 'OKButton'
    Enabled = False
    TabOrder = 4
    OnClick = Button1Click
  end
end
