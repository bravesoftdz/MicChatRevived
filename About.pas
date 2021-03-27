unit About;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  AboutMicChatRevivedEdition = class(Form)
    procedure linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
  {$region FormDesigner}
  private
    {$resource About.AboutMicChatRevivedEdition.resources}
    linkLabel1: LinkLabel;
    tabControl1: TabControl;
    tabPage1: TabPage;
    richTextBox1: RichTextBox;
    pictureBox1: PictureBox;
    {$include About.AboutMicChatRevivedEdition.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure AboutMicChatRevivedEdition.linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://www.youtube.com/channel/UCxFymvUt5FeMevOUEOfmcLA');
end;

end.
