object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'MakeEdge'
  ClientHeight = 251
  ClientWidth = 292
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 8
    Top = 16
    Width = 126
    Height = 15
    Caption = 'Name of the First Vertex'
  end
  object Label2: TLabel
    Left = 8
    Top = 45
    Width = 143
    Height = 15
    Caption = 'Name of the Second Vertex'
  end
  object Label3: TLabel
    Left = 8
    Top = 74
    Width = 38
    Height = 15
    Caption = 'Weight'
  end
  object Label4: TLabel
    Left = 8
    Top = 111
    Width = 22
    Height = 15
    Caption = 'RGB'
  end
  object Edit1: TEdit
    Left = 152
    Top = 13
    Width = 121
    Height = 23
    TabOrder = 0
    OnExit = Edit1Exit
  end
  object Edit2: TEdit
    Left = 152
    Top = 42
    Width = 121
    Height = 23
    TabOrder = 1
    OnExit = Edit2Exit
  end
  object Edit3: TEdit
    Left = 152
    Top = 71
    Width = 121
    Height = 23
    NumbersOnly = True
    TabOrder = 2
    Text = '0'
  end
  object Edit4: TEdit
    Left = 59
    Top = 108
    Width = 58
    Height = 23
    NumbersOnly = True
    TabOrder = 3
    Text = '255'
  end
  object Edit5: TEdit
    Left = 137
    Top = 108
    Width = 56
    Height = 23
    NumbersOnly = True
    TabOrder = 4
    Text = '255'
  end
  object Edit6: TEdit
    Left = 208
    Top = 108
    Width = 65
    Height = 23
    NumbersOnly = True
    TabOrder = 5
    Text = '255'
  end
  object CheckBox1: TCheckBox
    Left = 152
    Top = 160
    Width = 97
    Height = 17
    Caption = 'Oriented'
    TabOrder = 6
  end
  object Button1: TButton
    Left = 27
    Top = 200
    Width = 75
    Height = 25
    Caption = 'Add'
    Enabled = False
    TabOrder = 7
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 160
    Top = 200
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 8
    OnClick = Button2Click
  end
end
