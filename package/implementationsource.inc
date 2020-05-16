Result:=
'uses'+LE+
' phxOpenGL_GLFW3,'+LE+
 {$IFDEF PHX_VAMPIRE}
' phxGraphics_Vampyre;'+LE+
 {$ELSE}
' phxGraphics_FreeImage;'+LE+
 {$ENDIF}
''+LE+
'constructor TGame.Create;'+LE+
'begin'+LE+
'  inherited;'+LE+
''+LE+
'end;'+LE+
''+LE+
'procedure TGame.Init;'+LE+
'begin'+LE+
'  // Create the device using the default provider'+LE+
'  Device:= TPHXDevice.Create;'+LE+
'  // Initialize the device'+LE+
'  Device.Initialize(''Phoenix Demo'', 800, 600);'+LE+
'  // Create the canvas'+LE+
'  Canvas:= Device.CreateCanvas;'+LE+
'  // Create the timer'+LE+
'  Timer:= TPHXTimer.Create;'+LE+
'end;'+LE+
''+LE+
'procedure TGame.Update;'+LE+
'begin'+LE+
'  Timer.Update;'+LE+
'  Device.Update;'+LE+
'end;'+LE+
''+LE+
'procedure TGame.Render;'+LE+
'begin'+LE+
'  Device.Clear;'+LE+
'  Canvas.Flush;'+LE+
''+LE+
'  Device.Flip;'+LE+
'end;'+LE+
''+LE+
'procedure TGame.Shutdown;'+LE+
'begin'+LE+
'  Timer.Free;'+LE+
'  Canvas.Free;'+LE+
'  Device.Free;'+LE+
'end;'+LE+
''+LE+

'procedure TGame.KeyPressed(Key: TPHXVirtualKey; Shift: TPHXShiftStates);'+LE+
'begin'+LE+
'  inherited;'+LE+
'  // Terminate the application with esc'+LE+
'  if Key = VK_ESC then'+LE+
'  begin'+LE+
'    Terminate;'+LE+
'  end;'+LE+
'end;'+LE
