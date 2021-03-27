unit SysInfo;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  SysInfoForm = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource SysInfo.SysInfoForm.resources}
    groupBox1: GroupBox;
    label2: &Label;
    label3: &Label;
    label4: &Label;
    label5: &Label;
    groupBox2: GroupBox;
    label6: &Label;
    groupBox3: GroupBox;
    label7: &Label;
    label8: &Label;
    label9: &Label;
    label10: &Label;
    button1: Button;
    button2: Button;
    label1: &Label;
    {$include SysInfo.SysInfoForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure SysInfoForm.Form1_Load(sender: Object; e: EventArgs);
begin
  label1.Text := 'OS: ' + Environment.OSVersion.VersionString;
  label2.Text := 'Machine Name: ' + Environment.MachineName;
  label3.Text := 'Processor Count: ' + Environment.ProcessorCount;
  label4.Text := '64-bit: ' + Environment.Is64BitOperatingSystem.ToString;
  label5.Text := 'OS Directory: ' + Environment.SystemDirectory;
  label6.Text := 'Username: ' + Environment.UserName;
  label7.Text := 'Tick Count: ' + Environment.TickCount;
  label8.Text := 'Working Set: ' + Environment.WorkingSet;
  label9.Text := 'System Page Size: ' + Environment.SystemPageSize;
  label10.Text := 'Shutdown Started: ' + Environment.HasShutdownStarted.ToString;
end;

procedure SysInfoForm.button1_Click(sender: Object; e: EventArgs);
begin
  label1.Text := 'OS: ' + Environment.OSVersion.VersionString;
  label2.Text := 'Machine Name: ' + Environment.MachineName;
  label3.Text := 'Processor Count: ' + Environment.ProcessorCount;
  label4.Text := '64-bit: ' + Environment.Is64BitOperatingSystem.ToString;
  label5.Text := 'OS Directory: ' + Environment.SystemDirectory;
  label6.Text := 'Username: ' + Environment.UserName;
  label7.Text := 'Tick Count: ' + Environment.TickCount;
  label8.Text := 'Working Set: ' + Environment.WorkingSet;
  label9.Text := 'System Page Size: ' + Environment.SystemPageSize;
  label10.Text := 'Shutdown Started: ' + Environment.HasShutdownStarted.ToString;
end;

procedure SysInfoForm.button2_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

end.
