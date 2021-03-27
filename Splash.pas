unit Splash;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  SplashScreenForm = class(Form)
    procedure timer1_Tick(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Splash.SplashScreenForm.resources}
    timer1: Timer;
    components: System.ComponentModel.IContainer;
    {$include Splash.SplashScreenForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure SplashScreenForm.timer1_Tick(sender: Object; e: EventArgs);
begin
  Close;
end;

end.
