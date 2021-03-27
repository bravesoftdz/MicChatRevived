unit UTATAR;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  UTATARForm = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private 
    {$resource UTATAR.UTATARForm.resources}
    button1: Button;
    label1: &Label;
    pictureBox1: PictureBox;
    {$include UTATAR.UTATARForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure UTATARForm.button1_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

end.
