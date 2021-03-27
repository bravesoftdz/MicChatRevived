unit Launcher;

interface

uses System, System.Drawing, System.Windows.Forms, Unit1, Splash;

var
  ShowSplashSetting: string;

type
  LauncherForm = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure timer1_Tick(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private 
    {$resource Launcher.LauncherForm.resources}
    timer1: Timer;
    components: System.ComponentModel.IContainer;
    {$include Launcher.LauncherForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure LauncherForm.Form1_Load(sender: Object; e: EventArgs);
begin
  try
    var ShowSplashSettingFile := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings1.cfg', System.Text.Encoding.Default);
    ShowSplashSetting := ShowSplashSettingFile.ReadLine;
    ShowSplashSettingFile.Close;
  except
    Form(new SplashScreenForm).show;
    timer1.Enabled := true;
  end;
  if(ShowSplashSetting = 'True') then begin
    Form(new SplashScreenForm).show;
    timer1.Enabled := true;
  end;
  if(ShowSplashSetting = 'False') then
    Form(new Form1).show;
end;

procedure LauncherForm.timer1_Tick(sender: Object; e: EventArgs);
begin
  timer1.Enabled := false;
  Form(new Form1).show;
end;

end.
