unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, Settings, About, SysInfo, ClientNotFound, ServerNotFound;

var
  MessageShown: boolean = false;
  setting2: string;

type
  Form1 = class(Form)
    procedure aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure linkLabel2_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure linkLabel3_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure settingsToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure openTheClientToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure hostAServerToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure Form1_FormClosed(sender: Object; e: FormClosedEventArgs);
    procedure openTheClientToolStripMenuItem1_Click(sender: Object; e: EventArgs);
    procedure hostAServerToolStripMenuItem1_Click(sender: Object; e: EventArgs);
    procedure showMicChatToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure hideMicChatToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure notifyIcon1_MouseDoubleClick(sender: Object; e: MouseEventArgs);
    procedure showSystemInfoToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure closeMicChatToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure showSystemInfoToolStripMenuItem1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    panel1: Panel;
    panel2: Panel;
    micChatToolStripMenuItem: ToolStripMenuItem;
    aboutToolStripMenuItem: ToolStripMenuItem;
    groupBox1: GroupBox;
    linkLabel3: LinkLabel;
    pictureBox3: PictureBox;
    linkLabel1: LinkLabel;
    pictureBox2: PictureBox;
    linkLabel2: LinkLabel;
    pictureBox1: PictureBox;
    openTheClientToolStripMenuItem: ToolStripMenuItem;
    hostAServerToolStripMenuItem: ToolStripMenuItem;
    toolStripSeparator1: ToolStripSeparator;
    settingsToolStripMenuItem: ToolStripMenuItem;
    toolStripSeparator2: ToolStripSeparator;
    showSystemInfoToolStripMenuItem: ToolStripMenuItem;
    groupBox2: GroupBox;
    radioButton2: RadioButton;
    pictureBox5: PictureBox;
    button1: Button;
    radioButton1: RadioButton;
    pictureBox4: PictureBox;
    groupBox3: GroupBox;
    radioButton3: RadioButton;
    pictureBox6: PictureBox;
    button2: Button;
    radioButton4: RadioButton;
    pictureBox7: PictureBox;
    label1: &Label;
    notifyIcon1: NotifyIcon;
    components: System.ComponentModel.IContainer;
    contextMenuStrip1: System.Windows.Forms.ContextMenuStrip;
    openTheClientToolStripMenuItem1: ToolStripMenuItem;
    hostAServerToolStripMenuItem1: ToolStripMenuItem;
    toolStripSeparator3: ToolStripSeparator;
    showMicChatToolStripMenuItem: ToolStripMenuItem;
    hideMicChatToolStripMenuItem: ToolStripMenuItem;
    closeMicChatToolStripMenuItem: ToolStripMenuItem;
    toolStripSeparator5: ToolStripSeparator;
    toolStripSeparator4: ToolStripSeparator;
    showSystemInfoToolStripMenuItem1: ToolStripMenuItem;
    menuStrip1: MenuStrip;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new AboutMicChatRevivedEdition).show;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  try
    var SettingFile2 := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings2.cfg', System.Text.Encoding.Default);
    setting2 := SettingFile2.ReadLine;
    SettingFile2.Close;
  except
    setting2 := 'False';
  end;
  if(setting2 = 'True') then begin
    WindowState := System.Windows.Forms.FormWindowState.Minimized;
    ShowInTaskbar := false;
    hideMicChatToolStripMenuItem.Visible := false;
    showMicChatToolStripMenuItem.Visible := true;
    notifyIcon1.ShowBalloonTip(3000);
    MessageShown := true;
  end;
  label1.Text := System.Environment.OSVersion.VersionString + ' on ' + System.Environment.MachineName;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  if(radioButton1.Checked) then
    try
      exec('Client.exe');
    except
      Form(new UTLC).show;
    end;
  if(radioButton2.Checked) then
    try
      exec('Server.exe');
    except
      Form(new UTLS).show;
    end;
end;

procedure Form1.linkLabel2_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  try
    exec('Client.exe');
  except
    Form(new UTLC).show;
  end;
end;

procedure Form1.linkLabel3_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  try
    exec('Server.exe');
  except
    Form(new UTLS).show;
  end;
end;

procedure Form1.settingsToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new SettingsForm).show;
end;

procedure Form1.linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  Form(new SettingsForm).show;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  if(radioButton4.Checked) then Form(new SettingsForm).show;
  if(radioButton3.Checked) then Form(new SysInfoForm).show;
end;

procedure Form1.openTheClientToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  try
    exec('Client.exe');
  except
    Form(new UTLC).show;
  end;
end;

procedure Form1.hostAServerToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  try
    exec('Server.exe');
  except
    Form(new UTLS).show;
  end;
end;

procedure Form1.Form1_FormClosed(sender: Object; e: FormClosedEventArgs);
begin
  halt;
end;

procedure Form1.openTheClientToolStripMenuItem1_Click(sender: Object; e: EventArgs);
begin
  try
    exec('Client.exe');
  except
    Form(new UTLC).show;
  end;
end;

procedure Form1.hostAServerToolStripMenuItem1_Click(sender: Object; e: EventArgs);
begin
  try
    exec('Server.exe');
  except
    Form(new UTLS).show;
  end;
end;

procedure Form1.showMicChatToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  WindowState := System.Windows.Forms.FormWindowState.Normal;
  ShowInTaskbar := true;
  showMicChatToolStripMenuItem.Visible := false;
  hideMicChatToolStripMenuItem.Visible := true;
end;

procedure Form1.hideMicChatToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  WindowState := System.Windows.Forms.FormWindowState.Minimized;
  ShowInTaskbar := false;
  hideMicChatToolStripMenuItem.Visible := false;
  showMicChatToolStripMenuItem.Visible := true;
end;

procedure Form1.notifyIcon1_MouseDoubleClick(sender: Object; e: MouseEventArgs);
begin
  if(ShowInTaskbar = true) then
  begin
    WindowState := System.Windows.Forms.FormWindowState.Minimized;
    ShowInTaskbar := false;
    hideMicChatToolStripMenuItem.Visible := false;
    showMicChatToolStripMenuItem.Visible := true;
    if(MessageShown = false) then begin
      notifyIcon1.ShowBalloonTip(3000);
      MessageShown := true;
    end;
  end
  else begin
    WindowState := System.Windows.Forms.FormWindowState.Normal;
    ShowInTaskbar := true;
    showMicChatToolStripMenuItem.Visible := false;
    hideMicChatToolStripMenuItem.Visible := true;
  end;
end;

procedure Form1.showSystemInfoToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new SysInfoForm).show;
end;

procedure Form1.closeMicChatToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  halt;
end;

procedure Form1.showSystemInfoToolStripMenuItem1_Click(sender: Object; e: EventArgs);
begin
  Form(new SysInfoForm).show;
end;

end.
