unit ServerNotFound;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  UTLS = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private 
    {$resource ServerNotFound.UTLS.resources}
    button1: Button;
    label1: &Label;
    pictureBox1: PictureBox;
    {$include ServerNotFound.UTLS.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure UTLS.button1_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

end.
