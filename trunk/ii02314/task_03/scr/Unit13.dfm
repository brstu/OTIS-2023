object Form13: TForm13
  Left = 0
  Top = 0
  Caption = 'Form13'
  ClientHeight = 431
  ClientWidth = 307
  Color = clHighlightText
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object informationMemo: TMemo
    Left = 8
    Top = 48
    Width = 289
    Height = 384
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object showButton: TButton
    Left = 112
    Top = 8
    Width = 75
    Height = 25
    Cancel = True
    Caption = 'Show'
    TabOrder = 1
    OnClick = showButtonClick
  end
end
