Result:=
'type'+LE+
'TGame = class(TPHXApplication)'+LE+
'  private'+LE+
'    Device : TPHXDevice;'+LE+
'    Timer  : TPHXTimer;'+LE+
'    Canvas : TPHXCanvas;'+LE+
'  protected'+LE+
'    procedure KeyPressed(Key: TPHXVirtualKey; Shift: TPHXShiftStates); override;'+LE+ 
'  public'+LE+
'    constructor Create; override;'+LE+
''+LE+
'    procedure Init; override;'+LE+
'    procedure Update; override;'+LE+
'    procedure Render; override;'+LE+
'    procedure Shutdown; override;'+LE+
'  end;'+LE