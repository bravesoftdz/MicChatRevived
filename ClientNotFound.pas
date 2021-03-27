unit ClientNotFound;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  UTLC = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private 
    {$resource ClientNotFound.UTLC.resources}
    button1: Button;
    label1: &Label;
    pictureBox1: PictureBox;
    {$include ClientNotFound.UTLC.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure UTLC.button1_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

end.
