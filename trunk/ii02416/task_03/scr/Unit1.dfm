object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 479
  ClientWidth = 579
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 15
  object PaintBox1: TPaintBox
    Left = 0
    Top = 105
    Width = 579
    Height = 374
    Align = alClient
    Color = clBtnFace
    ParentColor = False
    OnMouseDown = PaintBox1MouseDown
    ExplicitLeft = -8
    ExplicitWidth = 773
    ExplicitHeight = 290
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 579
    Height = 105
    Align = alTop
    TabOrder = 0
    ExplicitWidth = 565
    object DeleteEdge: TButton
      Left = 6
      Top = 57
      Width = 129
      Height = 42
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1088#1077#1073#1088#1086
      DisabledImageName = 'DeleteEdge'
      TabOrder = 0
      OnClick = DeleteEdgeClick
    end
    object EditVertex: TButton
      Left = 141
      Top = 57
      Width = 129
      Height = 42
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1074#1077#1088'-'#1085#1091
      DisabledImageName = 'EditVertex'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = EditVertexClick
    end
    object EditEdge: TButton
      Left = 141
      Top = 9
      Width = 129
      Height = 42
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1088#1077#1073#1088#1086
      DisabledImageName = 'EditEdge'
      TabOrder = 2
      OnClick = EditEdgeClick
    end
    object Import: TButton
      Left = 443
      Top = 57
      Width = 129
      Height = 42
      Caption = #1048#1084#1087#1086#1088#1090
      DisabledImageName = 'Import'
      TabOrder = 3
      OnClick = ImportClick
    end
    object Export: TButton
      Left = 443
      Top = 9
      Width = 129
      Height = 42
      Caption = #1069#1082#1089#1087#1086#1088#1090
      DisabledImageName = 'Export'
      TabOrder = 4
      OnClick = ExportClick
    end
    object InfoGraph: TButton
      Left = 308
      Top = 9
      Width = 129
      Height = 42
      Caption = #1048#1085#1092'. '#1086' '#1075#1088#1072#1092#1077
      DisabledImageName = 'InfoGraph'
      TabOrder = 5
      OnClick = InfoGraphClick
    end
    object AddEdge: TButton
      Left = 6
      Top = 9
      Width = 129
      Height = 42
      Cancel = True
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1088#1077#1073#1088#1086
      DisabledImageName = 'Button1'
      TabOrder = 6
      OnClick = AddEdgeClick
    end
    object Distance: TButton
      Left = 308
      Top = 57
      Width = 129
      Height = 42
      Caption = #1056#1072#1089#1089#1090#1086#1103#1085#1080#1077
      DisabledImageName = 'Distance'
      TabOrder = 7
      OnClick = DistanceClick
    end
  end
  object SaveTextFileDialog1: TSaveTextFileDialog
    Left = 272
    Top = 8
  end
  object OpenTextFileDialog1: TOpenTextFileDialog
    Left = 272
    Top = 64
  end
end
