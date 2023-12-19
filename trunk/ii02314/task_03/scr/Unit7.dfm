object Form7: TForm7
  Left = 0
  Top = 0
  Caption = 'Form7'
  ClientHeight = 92
  ClientWidth = 178
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object EditLabelVertex: TLabel
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
  object EditVertexBut: TButton
    Left = 57
    Top = 80
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Edit'
    Enabled = False
    TabOrder = 1
    OnClick = EditVertexButClick
  end
end
