unit Contributors;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  ContribForm = class(Form)
    procedure treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
    procedure ContribForm_Load(sender: Object; e: EventArgs);
    procedure linkLabel3_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure linkLabel4_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Contributors.ContribForm.resources}
    treeView1: TreeView;
    panel2: Panel;
    button1: Button;
    label1: &Label;
    panel3: Panel;
    label2: &Label;
    linkLabel3: LinkLabel;
    panel4: Panel;
    linkLabel4: LinkLabel;
    label3: &Label;
    pictureBox1: PictureBox;
    pictureBox2: PictureBox;
    panel1: Panel;
    {$include Contributors.ContribForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure ContribForm.treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
begin
  if(treeView1.SelectedNode = treeView1.Nodes[0]) then
  begin
    panel3.Visible := true;
    panel4.Visible := false;
    pictureBox1.Visible := true;
    pictureBox2.Visible := false;
    label1.Text := 'Michael Agarkov';
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[1]) then
  begin
    panel4.Visible := true;
    panel3.Visible := false;
    pictureBox2.Visible := true;
    pictureBox1.Visible := false;
    label1.Text := 'Maksim Chernyshkov';
  end;
end;

procedure ContribForm.ContribForm_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure ContribForm.linkLabel3_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://github.com/MichaelAgarkov');
end;

procedure ContribForm.linkLabel4_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://github.com/maksim-mshp');
end;

procedure ContribForm.button1_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

end.
