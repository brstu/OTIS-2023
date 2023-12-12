object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 710
  ClientWidth = 1064
  Color = clBtnHighlight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  Position = poDesktopCenter
  OnCreate = FormCreate
  TextHeight = 15
  object MainMenu1: TMainMenu
    Left = 344
    Top = 232
    object File1: TMenuItem
      Caption = 'File'
      object File2: TMenuItem
        Caption = 'Open'
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object N2: TMenuItem
        Caption = 'Save'
      end
    end
    object Graph1: TMenuItem
      Caption = 'Graph'
      object Graph2: TMenuItem
        Caption = 'Rename Graph'
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object N4: TMenuItem
        Caption = 'Add Vertex'
        OnClick = N4Click
      end
      object DeleteVertex1: TMenuItem
        Caption = 'Delete Vertex'
        OnClick = DeleteVertex1Click
      end
      object DeleteVertex2: TMenuItem
        Caption = 'Edit Vertex'
        OnClick = DeleteVertex2Click
      end
      object N5: TMenuItem
        Caption = '-'
      end
      object N6: TMenuItem
        Caption = 'Add Edge'
        OnClick = N6Click
      end
      object DeleteEdge1: TMenuItem
        Caption = 'Delete Edge'
        OnClick = DeleteEdge1Click
      end
      object DeleteEdge2: TMenuItem
        Caption = 'Edit Edge'
        OnClick = DeleteEdge2Click
      end
    end
    object Algorithm1: TMenuItem
      Caption = 'Algorithm'
      object Algorithm2: TMenuItem
        Caption = 'Adj Matrix'
        OnClick = Algorithm2Click
      end
      object IncMatrix1: TMenuItem
        Caption = 'Inc Matrix'
        OnClick = IncMatrix1Click
      end
      object IncMatrix2: TMenuItem
        Caption = 'Find Distance'
        OnClick = IncMatrix2Click
      end
      object FindPath1: TMenuItem
        Caption = 'Find Path'
      end
    end
    object Info1: TMenuItem
      Caption = 'Info'
      object ShowInfo1: TMenuItem
        Caption = 'Show Info'
      end
    end
  end
end
