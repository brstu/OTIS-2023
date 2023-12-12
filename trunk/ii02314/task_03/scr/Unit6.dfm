object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Form6'
  ClientHeight = 148
  ClientWidth = 304
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label3: TLabel
    Left = 16
    Top = 26
    Width = 38
    Height = 15
    Caption = 'Weight'
  end
  object Label4: TLabel
    Left = 16
    Top = 63
    Width = 22
    Height = 15
    Caption = 'RGB'
  end
  object Edit3: TEdit
    Left = 160
    Top = 23
    Width = 121
    Height = 23
    NumbersOnly = True
    TabOrder = 0
    Text = '0'
  end
  object Edit4: TEdit
    Left = 67
    Top = 60
    Width = 58
    Height = 23
    NumbersOnly = True
    TabOrder = 1
    Text = '255'
  end
  object Edit5: TEdit
    Left = 145
    Top = 60
    Width = 56
    Height = 23
    NumbersOnly = True
    TabOrder = 2
    Text = '255'
  end
  object Edit6: TEdit
    Left = 216
    Top = 60
    Width = 65
    Height = 23
    NumbersOnly = True
    TabOrder = 3
    Text = '255'
  end
  object Button2: TButton
    Left = 112
    Top = 104
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 4
    OnClick = Button2Click
  end
end
