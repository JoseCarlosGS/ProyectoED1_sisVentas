object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 461
  ClientWidth = 857
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -15
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 20
  object nombreproducto: TLabel
    Left = 706
    Top = 135
    Width = 55
    Height = 20
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Nombre'
  end
  object Label2: TLabel
    Left = 166
    Top = 260
    Width = 271
    Height = 21
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'ULTIMOS PRODUCTOS A'#209'ADIDOS'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Historic'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 337
    Top = 140
    Width = 56
    Height = 20
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Codigo :'
  end
  object Label5: TLabel
    Left = 337
    Top = 169
    Width = 67
    Height = 20
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Cantidad :'
  end
  object Label6: TLabel
    Left = 442
    Top = 83
    Width = 135
    Height = 21
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Agregar Producto'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label1: TLabel
    Left = 328
    Top = 20
    Width = 184
    Height = 41
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'INVENTARIO'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -30
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Panel2: TPanel
    Left = 56
    Top = 72
    Width = 209
    Height = 169
    TabOrder = 9
  end
  object Panel1: TPanel
    Left = 296
    Top = 69
    Width = 545
    Height = 172
    TabOrder = 8
  end
  object ListView1: TListView
    Left = 30
    Top = 281
    Width = 553
    Height = 154
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Columns = <
      item
        Caption = 'COD.'
        Width = 81
      end
      item
        Caption = 'Nombre del producto'
        Width = 373
      end
      item
        Caption = 'CANT.'
        Width = 87
      end>
    Font.Charset = ANSI_CHARSET
    Font.Color = clMenuText
    Font.Height = -18
    Font.Name = 'Segoe UI Historic'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    ViewStyle = vsReport
  end
  object Edit1: TEdit
    Left = 432
    Top = 132
    Width = 89
    Height = 28
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 432
    Top = 169
    Width = 89
    Height = 28
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    TabOrder = 2
  end
  object Button1: TButton
    Left = 531
    Top = 129
    Width = 93
    Height = 31
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Buscar'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 531
    Top = 170
    Width = 93
    Height = 31
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = #10010' Agregar'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 87
    Top = 83
    Width = 146
    Height = 44
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Consultar Producto'
    TabOrder = 5
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 87
    Top = 135
    Width = 146
    Height = 43
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Nuevo Producto'
    TabOrder = 6
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 87
    Top = 185
    Width = 146
    Height = 44
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Eliminar Producto'
    TabOrder = 7
    OnClick = Button5Click
  end
  object Edit3: TEdit
    Left = 632
    Top = 130
    Width = 186
    Height = 28
    ReadOnly = True
    TabOrder = 10
  end
end
